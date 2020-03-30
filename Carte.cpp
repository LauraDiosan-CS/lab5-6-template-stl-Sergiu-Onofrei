#include "Carte.h"
#include <string.h>
Carte::Carte() {
	this->autor = NULL;
	this->titlu = NULL;
	this->status = NULL;
}
Carte::Carte(char* t, char* a, char* s) {
	this->titlu = new char[strlen(t) + 1];
	strcpy_s(this->titlu, strlen(t) + 1, t);
	this->autor = new char[strlen(a) + 1];
	strcpy_s(this->autor, strlen(a) + 1, a);
	this->status = new char[strlen(s) + 1];
	strcpy_s(this->status, strlen(s) + 1, s);
}
Carte::Carte(const Carte& c) {
	this->titlu = new char[strlen(c.titlu) + 1];
	strcpy_s(this->titlu, strlen(c.titlu) + 1, c.titlu);
	this->autor = new char[strlen(c.autor) + 1];
	strcpy_s(this->autor, strlen(c.autor) + 1, c.autor);
	this->status = new char[strlen(c.status) + 1];
	strcpy_s(this->status, strlen(c.status) + 1, c.status);
}
Carte::~Carte() {
	if (this->titlu != 0)
		delete[] this->titlu;
	if (this->autor != 0)
		delete[] this->autor;
	if (this->status != 0)
		delete[] this->status;
	this->titlu = NULL;
	this->autor = NULL;
	this->status = NULL;
}
char* Carte::getAutor() {
	return this->autor;
}
char* Carte::getTitlu() {
	return this->titlu;
}
char* Carte::getStatus() {
	return this->status;
}
void Carte::setAutor(char* newAutor) {
	if (this->autor != 0)
		delete[] this->autor;
	this->autor = new char[strlen(newAutor) + 1];
	strcpy_s(this->autor, strlen(newAutor) + 1, newAutor);
}
void Carte::setTitlu(char* newTitlu) {
	if (this->titlu != 0)
		delete[] this->titlu;
	this->titlu = new char[strlen(newTitlu) + 1];
	strcpy_s(this->titlu, strlen(newTitlu) + 1, newTitlu);
}
void Carte::setStatus(char* newStatus) {
	if (this->status != 0)
		delete[] this->status;
	this->status = new char[strlen(newStatus) + 1];
	strcpy_s(this->status, strlen(newStatus) + 1, newStatus);
}
Carte& Carte::operator=(const Carte& c) {
	this->setTitlu(c.titlu);
	this->setAutor(c.autor);
	this->setStatus(c.status);
	return *this;
}
bool Carte::operator==(const Carte& c) {
	return strcmp(this->titlu,c.titlu) == 0 && strcmp(this->status, c.status) == 0 && strcmp(this->autor,c.autor) == 0;
}