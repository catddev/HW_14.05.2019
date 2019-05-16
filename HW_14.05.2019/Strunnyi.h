#pragma once
#include"Instrument.h"

class Strunnyi :public Instrument {
public:
	Strunnyi():Instrument() {}
	Strunnyi(string type):Instrument(type) {}

	void voice() {
		cout << "pilic-pilic" << endl;
	}

	void show() {
		Instrument::show();
	}
};