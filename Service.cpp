#include "Service.h"
deque<Carte> Service::getAll() {
	return this->r.getAll();
}
Service::Service(const RepoFile<Carte>& c) {
	this->r = c;
}
void Service::setrepo(const RepoFile<Carte>& c) {
	this->r = c;
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
void Service::Modificare(Carte& c,Carte& newc) {
	this->r.Modificare(c,newc);
}
Carte Service::getElementPoz(int i) {
	return this->r.getElementPoz(i);
}
int Service::imprumutare(char* t,deque<Carte> aux) {
	char* p = new char[15];
	strcpy_s(p, strlen("Imprumutat") + 1, "Imprumutat");
	char* p2 = new char[15];
	strcpy_s(p2, strlen("Neimprumutat") + 1, "Neimprumutat");
	for (size_t i = 0;i < this->r.dimensiune();i++)
		if (strcmp(this->r.getElementPoz(i).getTitlu(), t) == 0)
			if (strcmp(this->r.getElementPoz(i).getStatus(), p2) == 0)
			{
				aux.push_back(getElementPoz(i));
				this->r.getAll()[i].setStatus(p);
				return 1;
			}
	delete[] p;
	return 0;
}