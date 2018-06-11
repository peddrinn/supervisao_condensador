#include "Condensador.h"
#include <vector>
#include <iostream>

using namespace std;

Condensador::Condensador()
{
}

Condensador::~Condensador()
{
}

void Condensador::addSensor(Sensor s){
	sensores.push_back(s);
}