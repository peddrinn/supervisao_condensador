#ifndef ALARME_H
#define ALARME_H

class Alarme
{
	bool status = false;
public:
	void toca();
	void enviaSms();
	void reconhecerAlarme();
	Alarme();
	~Alarme();

};

#endif // ALARME_H
