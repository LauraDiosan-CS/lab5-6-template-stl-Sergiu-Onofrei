#include "Service.h"
deque<Carte> Service::getAll() {
	return this->r.getAll();
}
int Service::getSize() {
	return this->r.dimensiune();
}
void Service::AddProdus(char* t, char* a, char* s) {
	Carte c(t, a, s);
	this->r.addElem(c);
}
void Service::Stergere(Carte& c) {
	this->r.Stergere(c);
}
void Service::Modificare(Carte& c) {
	this->r.Modificare(c);
}
Carte Service::getElementPoz(int i) {
	return this->r.getElementPoz(i);
}