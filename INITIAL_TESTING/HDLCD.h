#pragma once

#include <LiquidCrystal.h>
#include <stdint.h>

#define CHAR_WIDTH 5
#define CHAR_HEIGHT 8

// TODO: this has immense potential for optimization.
// and a lot more things could be const.

class HDLCD {
	public:
		HDLCD::HDLCD(const uint8_t, const uint8_t);
		~HDLCD();

		const uint8_t getWidth();
		const uint8_t getHeight();

		void HDLCD::set(uint8_t, uint8_t, bool);
		bool HDLCD::get(uint8_t, uint8_t) const;
	private:
		const uint8_t width;
		const uint8_t height;
		bool* framebuffer;
};

