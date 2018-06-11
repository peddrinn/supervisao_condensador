#include "Alarme.h"
#include <iostream>


using namespace std;


Alarme::Alarme() : status(false)
{
}

Alarme::~Alarme()
{
}


void Alarme::toca(){
	cout << "ALARME TOCANDO!" << endl;
}
