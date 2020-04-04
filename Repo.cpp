#include "Repo.h"
Repo<Carte>::Repo() {
}
void Repo<Carte>::addElem(Carte c) {
	this->elem.push_back(c);
}
int Repo<Carte>::dimensiune() {
	return this->elem.size();
}
deque<Carte> Repo<Carte>::getAll() {
	return this->elem;
}
void Repo<Carte>::Stergere(Carte c) {
	deque<Carte>::iterator it;
	it = find(elem.begin(), elem.end(), c);
	if (it != elem.end()) elem.erase(it);
}
void Repo<Carte>::Modificare(Carte& c) {
	for (size_t i = 0; i < elem.size(); i++)
		if (strcmp(this->elem[i].getTitlu(), c.getTitlu()) == 0) 
		{
			elem[i].setAutor(c.getAutor());
			elem[i].setStatus(c.getStatus());
		}
}
Carte Repo<Carte>::getElementPoz(int i) {
	return this->elem[i];
}
Repo<Carte>::~Repo() {
}