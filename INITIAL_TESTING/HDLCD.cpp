#include "HDLCD.h"

HDLCD::HDLCD(const uint8_t num_cols, const uint8_t num_rows)
	: height(num_rows * CHAR_HEIGHT), width(num_cols * CHAR_WIDTH)
{
	framebuffer = new bool[height * width];

	for (uint8_t i = 0; i < height * width; i++)
		framebuffer[i] = false;
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

void HDLCD::set(uint8_t x, uint8_t y, bool value) {
	if (x > width) return;
	if (y > height) return;

	framebuffer[x + (y * width)] = value;
}

bool HDLCD::get(uint8_t x, uint8_t y) const {
	if (x > width) return false;
	if (y > height) return false;

	return framebuffer[x + (y * width)];
}
