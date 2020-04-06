#pragma once
#include "Carte.h"
#include <deque>
#include <fstream>
#include <string>
using namespace std;
template <typename T>
class RepoFile {
private:
	deque<T> elem;
	const char* fisier;
public:
	RepoFile() {};
	RepoFile(const char* fileName);
	void loadFromFile(const char* fileName);
	void addElem(T c);
	deque<T> getAll();
	void Stergere(T c);
	void Modificare(T& c,T& newc);
	T getElementPoz(int i);
	int dimensiune();
	void saveToFile();
	~RepoFile() {};
};
template <typename T>
RepoFile<T>::RepoFile(const char* fileName)
{
	fisier = fileName;
	ifstream f(fileName);
	string linie;
	char* autor = new char[15];
	char* titlu = new char[15];
	char* status = new char[15];
	while (!f.eof()) {
		f >> titlu >> autor >> status;
		if (titlu != "") {
			T c(titlu, autor, status);
			elem.push_back(c);
		}
	}
	delete[] titlu;
	delete[] autor;
	delete[] status;
	f.close();
}
template <typename T>
void RepoFile<T>::loadFromFile(const char* fileName)
{
	elem.clear();
	fisier = fileName;
	ifstream f(fileName);
	char* autor = new char[15];
	char* titlu = new char[15];
	char* status = new char[15];
	while (!f.eof()) {
		f >> titlu >> autor >> status;
		if (titlu != "") {
			T c(titlu, autor, status);
			elem.push_back(c);
		}
	}
	delete[] titlu;
	delete[] autor;
	delete[] status;
	f.close();
}
template <typename T>
void RepoFile<T>::saveToFile()
{
	ofstream f(fisier);
	for (size_t i = 0; i < elem.size(); i++) {
		f << elem[i];
	}
	f.close();
}

template <typename T>
void RepoFile<T>::addElem(T c) {
	this->elem.push_back(c);
}
template <typename T>
int RepoFile<T>::dimensiune() {
	return this->elem.size();
}
template <typename T>
deque<T> RepoFile<T>::getAll() {
	return this->elem;
}
template <typename T>
void RepoFile<T>::Stergere(T c) {
	deque<Carte>::iterator it;
	it = find(elem.begin(), elem.end(), c);
	if (it != elem.end()) elem.erase(it);
}
template <typename T>
void RepoFile<T>::Modificare(T& c, T& newc) {
	typename deque<T>::iterator it;
	it = find(elem.begin(), elem.end(), c);
	if (it != elem.end())
		(*it) = newc;
}

template <typename T>
T RepoFile<T>::getElementPoz(int i) {
	return this->elem[i];
}