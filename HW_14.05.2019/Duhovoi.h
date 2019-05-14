#pragma once
#include"Instrument.h"

class Duhovoi :public Instrument {
public:
	Duhovoi():Instrument() {}
	Duhovoi(string type):Instrument(type) {}

	void show() {
		Instrument::show();
	}
};