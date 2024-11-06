#include"address_map_nios2.h"
#include"nios2_ctrl_reg_macros.h"

//draw a rectangle. Move the rectangle across the screen
//switch directions when you get to the left or roght edge of the screen

volatile int timeout;	//global variable used for synchronization

int x_dir;		//set = 1 to move to the right

volatile int pixel_buffer_start = FPGA_ONCHIP_BASE;

int resolution_x = 320;		//maximum x coordinate
int resolution_y = 240;		//maximum y coordinate

void clearScreen();
void VGA_box(int, int, int, int, short);
void VGA_text(int, int, char*);

int main()
{
	volatile int* interval_timer_ptr = (int*)TIMER_BASE;

	timeout = 0;	//use this as a barrier

	x_dir = 1;		//move right initially

	//rectangle coordinates
	int x1 = 10;
	int y1 = 15;
	int x2 = 50;
	int y2 = 30;

	//int ALT_x = 1;		

	int counter = 0x960000;		//approx 200ms
	*(interval_timer_ptr + 2) = (counter & 0xFFFF);
	*(interval_timer_ptr + 3) = (counter >> 16) & 0xFFFF;
	*(interval_timer_ptr + 1) = 0x7;

	NIOS2_WRITE_IENABLE(0x1);
	NIOS2_WRITE_STATUS(1);

	clearScreen();

	VGA_box(x1, y1, x2, y2, 0x187F);

	while (1)
	{
		while (!timeout);	//while timeout == 0 do NOTHING
							//do not move past this barrier

		//eventually the timer reaches 0
		//this will set timeout = 1
		//which means you will move past the barrier

		//instead of clear screen draw over the original rectangle with black
		VGA_box(x1, y1, x2, y2, 0x0);
		
		x1 = x1 + x_dir;	//move left edge forward 1
		x2 = x2 + x_dir;	//move right edge forward 1
		y1 = 15;
		y2 = 30;
		
		//use boundries 0 and 320 for the VGA screen
		//if ((x1 == 0) || (x2 == 320))	//if at either boundry, change direction
		//use boundries 0 and 160 for the emulator
		if ((x1 == 0) || (x2 == 160))	//if at either boundry, change direction
		{
			x_dir = -(x_dir);	//change direction
		}
		VGA_box(x1, y1, x2, y2, 0x187F);	//draw in new position

		timeout = 0;		//DO NOT FORGET TO RESET THIS
	}



	return 0;
}

void clearScreen()
{
	int clearColor = 0;		//black
	int pixel_ptr, row, col;

	//for each row (entire screen)
	for (row = 0; row <= resolution_y; row++)
	{
		//go through each column (entire screen)
		for (col = 0; col <= resolution_x; col++)
		{
			//use this for the VGA monitor
			//pixel_ptr = FPGA_ONCHIP_BASE + (row << 10) + (col << 1);

			//use this for the emulator
			pixel_ptr = FPGA_ONCHIP_BASE + (row << 9) + (col << 1);

			*(short*)pixel_ptr = clearColor;
		}
	}

}

void VGA_box(int x1, int y1, int x2, int y2, short pixel_color)
{
	int pixel_ptr, row, col;
	//for each row (from y1 to y2)
	for (row = y1; row <= y2; row++)
	{
		//go through each column (from x1 to x2)
		for (col = x1; col <= x2; col++)
		{
			//use this for the VGA monitor
			//pixel_ptr = FPGA_ONCHIP_BASE + (row << 10) + (col << 1);

			//use this for the emulator
			pixel_ptr = FPGA_ONCHIP_BASE + (row << 9) + (col << 1);

			*(short*)pixel_ptr = pixel_color;
		}
	}

}

void VGA_text(int x, int y, char* text_ptr)
{
	int offset;
	volatile char* character_buffer = (char*)FPGA_CHAR_BASE;

	offset = (y << 7) + x;
	while (*text_ptr)		//while we are NOT at the end of the string
	{
		*(character_buffer + offset) = *text_ptr;
		text_ptr++;		//move to the next character
		offset++;		//move one spot forward in the buffer
	}
}

