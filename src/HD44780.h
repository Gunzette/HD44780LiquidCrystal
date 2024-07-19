#ifndef HD44780_H
#define HD44780_H

#include <Arduino.h>

class HD44780 {
	public:
		HD44780(byte rw, byte rs, byte en, byte db[8]);
		void init();
		void clear();
	private:
		byte _rw;
		byte _rs;
		byte _en;
		byte _db[8];
		void _send_instruction(bool rws, bool rss, byte dbs);
};

#endif