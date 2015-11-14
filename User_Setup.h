//                            USER DEFINED SETTINGS V15
//            Set fonts to be loaded, pins used and SPI control method

// ##################################################################################
//
// Define the fonts that are to be used here
//
// ##################################################################################

// Comment out the #defines below with // to stop that font being loaded
// As supplied font 8 is disabled by commenting out
//
// If all fonts are loaded the extra FLASH space required is about 17800 bytes...
// To save FLASH space only enable the fonts you need!

#define LOAD_GLCD   // Font 1. Original Adafruit font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large font, needs ~2666 bytes in FLASH, only characters 1234567890:.apm
#define LOAD_FONT7  // Font 7. 7 segment font, needs ~2438 bytes in FLASH, only characters 1234567890:.
#define LOAD_FONT8  // Font 8. Large font needs ~3256 bytes in FLASH, only characters 1234567890:.


// ##################################################################################
//
// Define the pins that are used to interface with the display here
//
// ##################################################################################

// We must use hardware SPI
// FYI Mega SCK is pin 52, MOSI is 51, UNO/NanoPro micro etc SCK is pin 13 and MOSI is 11
// Leonardo Pro micro SCK is pin 15 and MOSI is 16

// These are the control pins I use on my Mega setup
//   TFT_CS  47  // Chip select control pin
//   TFT_DC  48  // Data Command control pin
//   TFT_RST 44  // Reset pin (could connect to Arduino RESET pin)

// These are the control pins I use on my UNO/Nano/Pro Micro/ATmega328 setup
//   TFT_CS  10  // Chip select control pin
//   TFT_DC   9  // Data Command control pin
//   TFT_RST  7  // Reset pin (could connect to Arduino RESET pin)

// These are the control pins I use on my Leonardo Pro Micro
//   TFT_CS  10  // Chip select control pin
//   TFT_DC   9  // Data Command control pin
//   TFT_RST  7  // Reset pin (could connect to Arduino RESET pin)

// ###### EDIT THE PIN NUMBERS IN THE 3 LINES FOLLOWING TO SUIT YOUR SETUP ######

#define   TFT_CS  10  // Chip select control pin
#define   TFT_DC   9  // Data Command control pin
#define   TFT_RST  7  // Reset pin (could connect to Arduino RESET pin)

// ###### PERSONAL SETUPS, I USE THESE PIN NUMBERS ON SOME OF MY OWN PROJECTS ######

// SD Card leonardo
//#define TFT_CS  10   // Chip select control pin
//#define TFT_DC   7   // Data Command control pin
//#define TFT_RST  8   // Reset pin (could connect to Arduino RESET pin)

// Geiger leonardo
//#define TFT_CS  10   // Chip select control pin
//#define TFT_DC   8   // Data Command control pin
//#define TFT_RST  7   // Reset pin (could connect to Arduino RESET pin)

// ##################################################################################
//
// Define whether we want to use delays or SPIF flag to control SPI transactions
//
// ##################################################################################

// If we define F_AS_T here then delays are used between SPI transactions
// to speed up rendering, comment out to "wait" for the SPIF flag instead
// Commenting out the line stops use of FastPin for control lines

// BUG AWAITING FIX - DO NOT COMMENT OUT IN THIS VERSION
#define F_AS_T


// ##################################################################################
//
// Other speed up options
//
// ##################################################################################

// If your sketch uses the GLCD font in size 1 with background then uncomment
// this next line will speed up rendering x5, code size will increase 136 bytes
// Only worth it if you print lots of GLCD font text...

//#define FAST_GLCD

// Uncomment the following #define to invoke a 20% faster drawLine() function
// This speeds up other funtions such as triangle outline drawing too
// Code size penalty is about 72 bytes

#define FAST_LINE

// Comment out the following #define to stop boundary checking and clipping
// for fillRectangle()and fastH/V lines. This speeds up other funtions such as text
// rendering where size>1. Sketch then must not draw graphics/text outside screen
// boundary. Code saving for no bounds check (i.e. commented out) is 316 bytes

//#define CLIP_CHECK

