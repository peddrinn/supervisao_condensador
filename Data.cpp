#include "Data.h"
#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include "Erro.h"

using namespace std;


vector<string> split(string str,string sep){
    char* cstr=const_cast<char*>(str.c_str());
    char* current;
    vector<string> arr;
    current=strtok(cstr,sep.c_str());
    while(current!=NULL){
        arr.push_back(current);
        current=strtok(NULL,sep.c_str());
    }
    return arr;
}


bool Data::operator==(Data &other){
    if((dia == other.getDia()) && (mes == other.getMes()) && (ano == other.getAno())){
        return true;
    }
    else{
        return false;
    }
}
/*    Obs: Os operadores de '>' e '<' testam apenas o ano da data.    */
bool Data::operator>(Data &other){
 if(ano > other.getAno()){
        return true;
    }
	if((ano == other.getAno()) && (mes > other.getMes())){
		return true;
	}
	if((ano == other.getAno()) && (mes == other.getMes()) && (dia > other.getDia())){
		return true;
	}
    else{
        return false;
    }
}

bool Data::operator<(Data &other){
    if(ano < other.getAno()){
        return true;
    }
	if((ano == other.getAno()) && (mes < other.getMes())){
		return true;
	}
	if((ano == other.getAno()) && (mes == other.getMes()) && (dia < other.getDia())){
		return true;
	}
    else{
        return false;
    }
}

//Logica está errada - consertar
Data Data::operator-(Data &other){
	Data tempo;

	tempo.hora = 0;
	tempo.minuto = 0;
	tempo.segundo = 0;

	int anos = (this->ano - other.ano);
	if(anos%4 >= 1){
		tempo.ano = anos*365 + (anos * 365);
	} else{
		tempo.ano = anos*365;
	}

	int meses = (this->mes - other.mes);
	if(meses<0) meses = meses * -1;

	int dias = (this->dia - other.dia);
	if(dias<0) dias = dias * -1;

	tempo.dia = dias;
	tempo.mes = meses;
	tempo.ano = anos;

	return tempo;
}

Data Data::operator+(Data &other){
	Data tempo;

	tempo.hora = 0;
	tempo.minuto = 0;
	tempo.segundo = 0;

	int anos = (this->ano + other.ano);

	int meses = (this->mes + other.mes);
	if(meses>12) meses = 12 + (meses - 12);

	int dias = (this->dia + other.dia);
	if(dias>31) dias = 31 + (dias - 31);

	tempo.dia = dias;
	tempo.mes = meses;
	tempo.ano = anos;

	return tempo;
}



void Data::operator=(Data &other){
	this->ano = other.ano;
	this->mes = other.mes;
	this->dia = other.dia;
	this->hora = other.hora;
	this->minuto = other.minuto;
	this->segundo = other.segundo;
}


	void Data::validaData(){
		if((mes > 12 || mes < 1) || (dia > 31 || dia < 1)){
			throw Erro("Data invalida!");
		}
	}

	long int Data::dateToTicks(){
		Data dia0;

		int ano, mes, dia;
		long int tick;
		
		if(this->dia == 1, this->mes == 1, this->ano == 1970) return 0;

		Data diaTick = *this - dia0;

		if(ano%4 >= 1){
			ano = diaTick.ano*365 + (diaTick.ano * 365);
		} else{
			ano = diaTick.ano*365;
		}

		mes = diaTick.mes*30;

		dia = diaTick.dia;

		tick = (ano + mes + dia) * 86400;

		return tick;


	}

	//construtor default
	Data::Data() : dia(1), mes(1), ano(1970), hora(0), minuto(0), segundo(0) {
		ticks = dateToTicks();		
	}	

	Data::Data(string s){

		vector<string> dado;
		vector<string> data;
		vector<string> horas;

		dado = split(s," ");

		data = split(dado[0], "-");

		ano = stoi(data[0]);
		mes = stoi(data[1]);
		dia = stoi(data[2]);

		horas = split(dado[1],":");
		 
		hora = stoi(horas[0]);
		minuto = stoi(horas[1]);
		segundo = stoi(horas[2]);

		this->validaData();
	}

Data Data::ticksToDate(){
	long int total = this->ticks;
	int totalDias = total / 86400;
	int anos = totalDias / 365;
	int meses = (totalDias%365)/30;
	int dias = ((totalDias%365)%30);

	Data dia;

	dia.ano = anos;
	dia.mes = meses;
	dia.dia = dias;
	dia.hora = 0;
	dia.minuto = 0;
	dia.segundo = 0;
	
	return dia;
}

Data::~Data(){
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