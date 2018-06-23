#ifndef SENSOR_H
#define SENSOR_H
#include <iostream>
#include <string>
#include "Alarme.h"

using namespace std;

class Sensor
{
	int id;
	string modelo;
	float valorAtual();
	float limInferior();
	float limSuperior();
	void verificaValor();
	Alarme al;
public:
	Sensor();
	~Sensor();
	float getValor();
	void readValor();
	void setValorAtual(float v);
	void setLimiteInferior(float li);
	void setLimiteSuperior(float ls);
	void setModelo(string m);	
	
};

#endif // SENSOR_H
