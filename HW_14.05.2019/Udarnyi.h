#pragma once
#include"Instrument.h"

class Udarnyi :public Instrument {
public:
	Udarnyi():Instrument(){}
	Udarnyi(string type):Instrument(type){}

	void show() {
		Instrument::show();
	}
};