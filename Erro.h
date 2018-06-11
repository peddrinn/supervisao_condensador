#ifndef ERRO_H
#define ERRO_H

class Erro
{
protected:
	char msg[100];
public:
	Erro( char* e);
	Erro();
	~Erro();
	virtual const char* what();

};

#endif // ERRO_H
