#include"Udarnyi.h"
#include"Strunnyi.h"
#include"Duhovoi.h"
#include<vector>
#include<fstream>

int main() {

	ifstream in_file("in.txt");
	Instrument* ins;//обязательно делать через указатель,т.к. при обращении к вектору, заставить работать методы каждого класса можно будет только через указатель!
	vector<Instrument*> orchestra;
	int index;
	string str;

	while (!in_file.eof()) {
		in_file >> index >> str;
		if(index==1){
			Udarnyi *tmp=new Udarnyi;
			tmp->setType(str);
			tmp->setIndex(index);
			ins = tmp;
		}
		else if (index==2) {
			Strunnyi *tmp=new Strunnyi;
			tmp->setType(str);
			tmp->setIndex(index);
			ins = tmp;
		}
		else if (index==3) {
			Duhovoi *tmp=new Duhovoi;
			tmp->setType(str);
			tmp->setIndex(index);
			ins = tmp;
		}
		orchestra.push_back(ins);
		in_file.get();
	}
	for (int i = 0; i < orchestra.size(); i++) {
		orchestra[i]->show();
		orchestra[i]->voice();
	}

	in_file.close();

	system("pause");
	return 0;
}