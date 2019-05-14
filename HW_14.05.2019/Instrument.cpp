#include "Instrument.h"

Instrument::Instrument()
{
	type = "";
}

Instrument::Instrument(string type)
{
	this->type = type;
}

void Instrument::show()
{
	cout << type << endl;
}
