#ifndef CONDENSADOR_H
#define CONDENSADOR_H
#include <vector>
#include <iostream>
#include "Sensor.h"

using namespace std;

class Condensador
{
	bool status = false;
	vector<Sensor> sensores;// vetor de ponteiros pra sensores
	//etapa estagioAtual;
	//log
public:
	Condensador();
	~Condensador();
	void addSensor(Sensor s);
	
	

};

#endif // CONDENSADOR_H
