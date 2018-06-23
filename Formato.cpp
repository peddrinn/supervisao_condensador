#include "Formato.h"
#include "Data.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;


Formato::Formato(){}

Formato::~Formato(){}

string Formato::getNome(){
    return nome;
}

// void Formato::printData(Data d){
	
// 	cout << getDataFormatada(d) << endl;
			
// }

// string Formato::getDataFormatada(Data d){
// 	string data;
	
// 	data =  to_string(d.getDia()) + "/" + to_string(d.getMes()) + "/" + to_string(d.getAno()) + " " + to_string(d.getHora()) + ":" + to_string(d.getMin()) + ":" + to_string(d.getSeg());

// 	return data;
// }