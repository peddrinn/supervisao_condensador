#include <iostream>
#include <vector>
#include <string>
#include "Data.h"
#include "sensor.h"
#include "condensador.h"
#include "Formato.h"
#include "Erro.h"

using namespace std;

int main(int argc, char **argv){
	try{
	
    
        
        
        
        
        
        
        
        
        
        
        
        
    //Teste da CLasse data
    
    cout << "Teste criando data" << endl;
	Data data(11,5,2018,20,12,4);
	cout << data.getDia() << "/" << data.getMes() << "/" << data.getAno() << endl; 
	
	cout << "Teste data invalida" << endl;
	Data data1(11,13,2018,20,12,4);
	//Data data(11,0,2018,20,12,4);
	
 
	}catch(...){
		
	}
	return 0;

}
