#pragma once
#include"Instrument.h"

class Udarnyi :public Instrument {
public:
	Udarnyi():Instrument(){}
	Udarnyi(string type):Instrument(type){}

	void voice(){
		cout << "bam-bam-bam" << endl;
	}
	void show() {
		Instrument::show();
	}
};