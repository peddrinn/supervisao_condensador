#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <vector>
#include <string>
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
	long ticks;		   // Número de segundos desde 01/01/1970
    //Formato estilo;; // pt-br  ou  en-us
	void ticksToDate();
	void dateToticks();
	
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
	//bool operator==(Data &d2); // verificar se o formatos sao iguais
	//bool operator<(Data &d2); // compara datas
	//bool operator>(Data &d2); // compara datas
	//bool operator-(Data &d2);//Para subtrair dias
	//bool operator+(Data &d2); // Para somar dias
	Data(int,int,int,int,int,int);
	Data();
	~Data();

};

#endif // DATA_H
