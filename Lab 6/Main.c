#include "address_map.h" // Include the address map header file

int main()
{
    // Define pointers to the memory-mapped I/O addresses
    volatile int *red_LED_ptr = (int *)LEDR_BASE;     // Pointer to the LEDR base address
    volatile int *hex3_hex0_ptr = (int *)HEX3_0_BASE; // Pointer to the HEX3_0 base address
    volatile int *hex5_hex4_ptr = (int *)HEX5_4_BASE; // Pointer to the HEX5_4 base address
    volatile int *sw_ptr = (int *)SW_BASE;            // Pointer to the SW base address
    volatile int *key_ptr = (int *)KEY_BASE;          // Pointer to the KEY base address

    // Initialize variables
    int slider = 0x00000000;                // Variable to store the state of the switches
    int Wnumber_5_4 = 0x00006606;           // Predefined value for HEX5_4 display
    int Wnumber_3_0 = 0x7F5B6667;           // Predefined value for HEX3_0 display
    long long int classNumber = 0x5B7F6D3F; // Predefined value for class number display
    int pushButton = 0x00000000;            // Variable to store the state of the push buttons

    while (1) // Infinite loop
    {
        pushButton = *(key_ptr); // Read the state of the push buttons
        slider = *(sw_ptr);      // Read the state of the switches
        *red_LED_ptr = slider;   // Set the LEDs to match the state of the switches

        if (pushButton == 1 || pushButton == 2) // Check if button 1 or 2 is pressed
        {
            *hex5_hex4_ptr = 0x00000000;  // Clear the HEX5_4 display
            *hex3_hex0_ptr = classNumber; // Display the class number on HEX3_0
        }
        else // If no relevant button is pressed
        {
            *hex3_hex0_ptr = Wnumber_3_0; // Display the predefined value on HEX3_0
            *hex5_hex4_ptr = Wnumber_5_4; // Display the predefined value on HEX5_4
        }
    }
    return 0; // Return 0 to indicate successful execution
}