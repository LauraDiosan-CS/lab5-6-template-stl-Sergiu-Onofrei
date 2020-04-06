#pragma once
#include "Carte.h"
#include <deque>
template <typename T>
class Repo
{
protected:
	deque<T> elem;

public:
	Repo() {};
	void addElem(T c);
	deque<T> getAll();
	void Stergere(T c);
	void Modificare(T& c,T& newc);
	T getElementPoz(int i);
	int dimensiune();
	int imprumutare(char* t);
	~Repo();
};
template <typename T>
void Repo<T>::addElem(T c) {
	this->elem.push_back(c);
}
template <typename T>
int Repo<T>::dimensiune() {
	return this->elem.size();
}
template <typename T>
deque<T> Repo<T>::getAll() {
	return this->elem;
}
template <typename T>
void Repo<T>::Stergere(T c) {

	typename deque<T>::iterator it;
	it = find(elem.begin(), elem.end(), c);
	if (it != elem.end()) elem.erase(it);
}
template <typename T>
void Repo<T>::Modificare(T& c, T& newc) {
	typename deque<T>::iterator it;
	it = find(elem.begin(), elem.end(), c);
	if (it != elem.end())
		(*it) = newc;
}
template <typename T>
T Repo<T>::getElementPoz(int i) {
	return this->elem[i];
}
template <typename T>
Repo<T>::~Repo() {
}
template <typename T>
int Repo<T>::imprumutare(char* t) {
	char* p = new char[15];
	strcpy_s(p, strlen("Imprumutat") + 1, "Imprumutat");
	char* p2 = new char[15];
	strcpy_s(p2, strlen("Neimprumutat") + 1, "Neimprumutat");
	for (size_t i = 0;i < elem.size();i++)
		if (strcmp(this->elem[i].getTitlu(), t) == 0)
			if (strcmp(this->elem[i].getStatus(),p2) == 0)
			{
				elem[i].setStatus(p);
				return 1;
			}
	delete[] p;
	return 0;
}