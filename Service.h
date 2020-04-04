#pragma once
#include "Repo.h"
class Service {
private:
	Repo<Carte> r;
public:
	Service() {}
	deque<Carte> getAll();
	int getSize();
	void AddProdus(char* t, char* a, char* s);
	void Stergere(Carte& c);
	void Modificare(Carte& c);
	Carte getElementPoz(int i);
	~Service() {}

};
