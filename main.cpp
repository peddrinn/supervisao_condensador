#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include "Data.h"
#include "Sensor.h"
#include "Condensador.h"
#include "Formato.h"
#include "Erro.h"
#include <fstream>
#include <stdexcept>

using namespace std;

int main(int argc, char **argv){
	

	string linha;
	vector<string> leituras, valorTemperatura, valorPressao;
	int temp, pressao;
	vector<Data> dataTemperatura, detaPressao;
	ifstream fileTemperatura(argv[1]);
	// ifstream filePressao(argv[1]);
	int i =0;

	try{
	
	while(getline( fileTemperatura, linha, ';' )){
		leituras.push_back(linha);
		if(i%2==0)	dataTemperatura.push_back(leituras[i]);
		if(i%2!=0)	valorTemperatura.push_back(leituras[i]);
		i++;
	}
	
	// while(getline( filePressao, linha, ';' )){
	// 	leituras.push_back(linha);
	// }
        
    //Teste da CLasse data
    
    // cout << "Teste criando ticks" << endl;
	// Data ticks(1,1,1970,0,0,0);
	// cout << ticks.getDia() << "/" << ticks.getMes() << "/" << ticks.getAno() << " " << ticks.getHora() << ":" << ticks.getMin() << ":" << ticks.getSeg() << endl; 
	
	//cout << "Teste data invalida" << ticks;
	// Data data1(11,13,2018,20,12,4);
	//Data data(11,0,2018,20,12,4);
	
	
	
 
 
 
 
 
 
	}catch(exception &e){
        cout << "Erro: " << e.what() << endl;
		//cerr << "Erro: " << e->what() << endl;
	}catch(...){
		cout << "Erro inesperado.\n";
	}
	return 0;
}
