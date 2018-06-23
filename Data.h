#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <vector>
#include <string>
#include "Formato.h"
// OBS TODOS CONSTRUTORES CHAMAM validaData();
//e uma exceão
using namespace std;

class Data
{
	int dia;
	int mes;
	int ano;
	int hora;
	int minuto;
	int segundo;
	int diaSemana; // de 0 a 6 que representa os dias da semana
	long int ticks;		   // Número de segundos desde 01/01/1970
    //Formato formato; // pt-br  ou  en-us
	Data ticksToDate();
	long int dateToTicks();
	
public:
	int getDia();
	int getMes();
	int getAno();
	int getHora();
	int getMin();
    int getSeg();
	int getFormat(); // por default é pt-br
	int getDiaSemana();
    void validaData(); // NO TP3 DIZ PARA SER DO TIPO BOOL - VERIFICAR
	Data now();
	void printData(); //imprime a data na tela conforme o formato. Verificar o formato 
	string getData(); // Retorna a data formatada como string
	bool operator>(Data &other);
    bool operator<(Data &other);
    bool operator==(Data &other);
	Data operator-(Data &other);//Para subtrair dias
	void operator=(Data &other);
	Data operator+(Data &other); // Para somar dias
	Data();
	Data(string s);
	~Data();

};

#endif // DATA_H
