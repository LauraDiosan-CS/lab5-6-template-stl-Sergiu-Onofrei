#pragma once
#include "Carte.h"
#include <deque>
template <class Carte>
class Repo
{
private:
	deque<Carte> elem;

public:
	Repo() {};
	void addElem(Carte c);
	deque<Carte> getAll();
	void Stergere(Carte c);
	void Modificare(Carte& c);
	Carte getElementPoz(int i);
	int dimensiune();
	~Repo();
};
