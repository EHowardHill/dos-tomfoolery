#ifndef __GRAPH_H
#define __GRAPH_H

/* Defines for graphics module */
#define VIDEO_BIOS      10H
#define VIDEO_RAM       0xA000 

/* Screen size, width & height defined */
#define SCREEN_WIDTH    320
#define SCREEN_HEIGHT   200
#define SCREEN_SIZE     (SCREEN_WIDTH * SCREEN_HEIGHT)

/* Typedefs for byte & word */
typedef unsigned char byte;
typedef unsigned short word;

/* Prototypes for Graphics Module */
void initializeGraphicsMode(void);
void endGraphicsMode(void);
void putPixel(word X, word Y, byte color);
byte getPixel(word X, word Y);

void loadPaletteData(char *palFileName);
void setVGApalette(unsigned char *buffer);
void displayHFGFile(char *fileName, unsigned char x, 
                    unsigned char y, signed char transparentByte);
void displaySplash(char *fileName, signed char transparentColor);

#endif