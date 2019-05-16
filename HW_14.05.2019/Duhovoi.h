#pragma once
#include"Instrument.h"

class Duhovoi :public Instrument {
public:
	Duhovoi():Instrument() {}
	Duhovoi(string type):Instrument(type) {}

	void voice() {
		cout << "tum-dum-dum" << endl;
	}

	void show() {
		Instrument::show();
	}
};