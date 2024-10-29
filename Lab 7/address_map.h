#ifndef __ADDRESS_MAP__ // Include guard to prevent multiple inclusions of this header file
#define __ADDRESS_MAP__

// Base address for the LEDR (LED Red) peripheral
#define LEDR_BASE 0xFF200000

// Base address for the HEX3_0 (First two 7-segment displays) peripheral
#define HEX3_0_BASE 0xFF200020

// Base address for the HEX5_4 (Last 4 7-segment displays) peripheral
#define HEX5_4_BASE 0xFF200030

// Base address for the SW (Switches) peripheral
#define SW_BASE 0xFF200040

// Base address for the KEY (Buttons) peripheral
#define KEY_BASE 0xFF200050

#endif // End of include guard