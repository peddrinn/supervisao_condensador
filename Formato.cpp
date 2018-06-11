#include "Formato.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;


/*Formato::print(Data d){
	for(int i=0; i<sizeof(ordemAtributos); i++){
		
		switch(ordemAtributo[i]
			case "ano" : cout << d.getAno();
			case "mes": cout << d.getMes();
			case "dia"  : cout << d.getDia();
			//etce tal...
			
		
	}
	*/
Formato::Formato()
{
}

Formato::~Formato()
{
}

string Formato::getNome(){
    return nome;
}
