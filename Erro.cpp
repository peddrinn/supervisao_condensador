#include "Erro.h"
#include <string.h>
//virtual const char* what() const throw()

const char* Erro::what()
	{
		return msg;
	}

Erro::Erro(char* e)
	{
		strcpy(msg, e);
	}

Erro::Erro()
{
}

Erro::~Erro()
{
}

