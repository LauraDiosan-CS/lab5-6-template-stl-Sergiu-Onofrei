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
Repo<Carte>::~Repo() {
}