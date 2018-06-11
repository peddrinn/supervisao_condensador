#include "Data.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

	void Data::validaData(){
		if((mes > 12) or (mes < 1)){
			cout << "Data Invalida!" << endl;
			//throw classe_de_erro_a_criar("Erro data invalida");
		}
	}

	//construtor default
	Data::Data() : dia(1), mes(1), ano(1970), hora(12), minuto(0), segundo(0) {
		void dateToTicks();
		
	}
	//construtor com parametros
	Data::Data(int d, int m, int a,int h,int mn, int s ) : dia(d), mes(m), ano(a), hora(h), minuto(mn), segundo(s){	
		validaData();
	}
		//dateToTicks();
	
	
	//construtor
	/*
	Data::Data(int p){
		ticksToDate();
	}
	*/
	
	/*// mas vamos criar uma classe chamad formato pra nao usar essa treta de print pra la e pra ca
	void Data::print(){
		Estilo::print(tickes);
		}
	*/
Data::~Data()
{
}

int Data::getDia(){
	return dia;
}

int Data::getMes(){
	return mes;
}

int Data::getAno(){
	return ano;
}

int Data::getHora(){
	return hora;
}


int Data::getMin(){
    return minuto;
}

int Data::getSeg(){
    return segundo;
}

int Data::getDiaSemana(){
	return diaSemana;
}


