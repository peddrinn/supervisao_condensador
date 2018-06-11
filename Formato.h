#ifndef FORMATO_H
#define FORMATO_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Formato
{
	string nome;
    char separador;
	vector<string> atributos;           // Define os atributos que devem ser exibidos na impressão da data formatada
public:
	Formato();
	~Formato();
	//void printData(Data d);           // Imprime a data na tela conforme o formato
	//string getDataFormatada(Data d);  // Retorna a data formatada como string
	string getNome();
};

#endif // FORMATO_H
