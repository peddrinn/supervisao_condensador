#ifndef ERRO_H
#define ERRO_H
#include <fstream>
#include <stdexcept>

using namespace std;

// Classe de erro filha da classe exception da biblioteca padrao
class Erro : public exception
{
protected:
	char msg[100];
public:
	Erro(char* e);
	Erro();
	~Erro();
	virtual const char* what() const throw();

};

#endif // ERRO_H
