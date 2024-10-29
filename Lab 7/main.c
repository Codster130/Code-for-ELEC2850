#include "address_map.h"

// Function to convert a number to its corresponding 7-segment display hexadecimal code
int toHex(int num)
{
    switch (num)
    {
    case 0x0:
        return 0x3F; // 0
    case 0x1:
        return 0x06; // 1
    case 0x2:
        return 0x5B; // 2
    case 0x3:
        return 0x4F; // 3
    case 0x4:
        return 0x66; // 4
    case 0x5:
        return 0x6D; // 5
    case 0x6:
        return 0x7D; // 6
    case 0x7:
        return 0x07; // 7
    case 0x8:
        return 0x7F; // 8
    case 0x9:
        return 0x6F; // 9
    case 0xA:
        return 0x77; // A
    case 0xB:
        return 0x7C; // B
    case 0xC:
        return 0x39; // C
    case 0xD:
        return 0x5E; // D
    case 0xE:
        return 0x79; // E
    case 0xF:
        return 0x71; // F
    default:
        return 0x00; // Default case
    }
}

int main()
{
    // Define pointers to the memory-mapped I/O addresses
    volatile int *red_LED_ptr = (int *)LEDR_BASE;     // Pointer to the LEDR base address
    volatile int *hex3_hex0_ptr = (int *)HEX3_0_BASE; // Pointer to the HEX3_0 base address
    volatile int *sw_ptr = (int *)SW_BASE;            // Pointer to the SW base address
    volatile int delayCount;                          // Variable for delay loop

    int slider = 0x00000000;     // Variable to store the state of the switches
    int pushButton = 0x00000000; // Variable to store the state of the push buttons

    while (1)
    {
        slider = *(sw_ptr);    // Read the state of the switches
        *red_LED_ptr = slider; // Set the LEDs to match the state of the switches

        // Extract bits from the slider variable
        int bit4 = slider & 0xF;         // Extract the lower 4 bits
        int bit8 = (slider >> 4) & 0xF;  // Extract bits 4-7
        int bit10 = (slider >> 8) & 0x3; // Extract bits 8-9

        // Convert the extracted bits to 7-segment display codes
        int hex2 = toHex(bit10);
        int hex1 = toHex(bit8);
        int hex0 = toHex(bit4);

        // Combine the 7-segment display codes and write to the HEX display
        *hex3_hex0_ptr = (hex2 << 16) | (hex1 << 8) | hex0;

        // Delay loop
        for (delayCount = 100000; delayCount != 0; --delayCount)
        {
            // Do nothing, just delay
        }
    }
}