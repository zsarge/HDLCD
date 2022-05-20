#include "HDLCD.h"

HDLCD::HDLCD(const uint8_t num_cols, const uint8_t num_rows) 
	: height(num_rows * CHAR_HEIGHT), width(num_cols * CHAR_WIDTH)
{
	framebuffer = new bool[height * width];
}

HDLCD::~HDLCD() {
	delete[] framebuffer;
}

const uint8_t HDLCD::getWidth() {
	return width;
}

const uint8_t HDLCD::getHeight() {
	return height;
}

