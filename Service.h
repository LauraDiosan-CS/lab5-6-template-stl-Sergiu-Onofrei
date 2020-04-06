#pragma once
#include "RepoFile.h"
class Service {
private:
	RepoFile<Carte> r;
public:
	Service() {}
	Service(const RepoFile<Carte>& c);
	void setrepo(const RepoFile<Carte>& c);
	deque<Carte> getAll();
	int getSize();
	void AddProdus(char* t, char* a, char* s);
	void Stergere(Carte& c);
	void Modificare(Carte& c,Carte& newc);
	Carte getElementPoz(int i);
	int imprumutare(char* t, deque<Carte> aux);
	~Service() {}

};
