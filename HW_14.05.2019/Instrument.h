#pragma once
#include<iostream>
#include<string>
using namespace std;

//Создать базовый класс «Музыкальный инструмент»
//и классы «Ударный», «Струнный», «Духовой».
//Создать массив объектов(оркестр).Выдать состав оркестра.

class Instrument {
protected:
	string type;
public:
	Instrument();
	Instrument(string type);

	virtual void show();
};