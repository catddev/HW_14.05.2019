#include "Instrument.h"

Instrument::Instrument()
{
	type = "";
}

Instrument::Instrument(string type)
{
	this->type = type;
}

void Instrument::setType(string type)
{
	this->type = type;
}

int Instrument::getIndex()
{
	return index;
}

void Instrument::setIndex(int index)
{
	this->index = index;
}

void Instrument::voice()
{
	cout << "muuuuusiiic" << endl;
}

void Instrument::show()
{
	cout << type << endl;
}
