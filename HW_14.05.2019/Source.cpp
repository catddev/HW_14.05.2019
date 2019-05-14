#include"Udarnyi.h"
#include"Strunnyi.h"
#include"Duhovoi.h"
#include<vector>
#include<fstream>

int main() {

	ifstream in_file("in.txt");
	vector<Instrument> orchestra;
	int index;
	string str;

	//почему через указатели выводит пустые строки?
	//Instrument *ins;
	//vector<Instrument*> orchestra;

	while (!in_file.eof()) {
		in_file >> index >> str;
		if(index==1){
			Udarnyi tmp(str);
			orchestra.push_back(tmp);
		}
		else if (index==2) {
			Strunnyi tmp(str);
			orchestra.push_back(tmp);
		}
		else if (index==3) {
			Duhovoi tmp(str);
			orchestra.push_back(tmp);
		}
	}
	for (int i = 0; i < orchestra.size(); i++)
		orchestra[i].show();

	in_file.close();

	system("pause");
	return 0;
}