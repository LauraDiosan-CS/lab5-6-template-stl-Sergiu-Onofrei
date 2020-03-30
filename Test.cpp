#include "Test.h"
#include "Carte.h"
#include <assert.h>
#include <iostream>
#include "Repo.h"
void test() {
	Carte c = Carte();
	assert(c.getAutor() == NULL);
	assert(c.getStatus() == NULL);
	char* p = new char[50];
	strcpy_s(p, strlen("Ion") + 1, "Ion");
	char* s = new char[50];
	strcpy_s(s, strlen("imprumutat") + 1, "imprumutat");
	char* t = new char[50];
	strcpy_s(t, strlen("Painea") + 1, "Painea");
	char* p1 = new char[50];
	strcpy_s(p1, strlen("Vlad") + 1, "Vlad");
	char* s1 = new char[50];
	strcpy_s(s1, strlen("neimprumutat") + 1, "neimprumutat");
	char* t1 = new char[50];
	strcpy_s(t1, strlen("Sfarsit") + 1, "Sfarsit");
	c.setAutor(p);
	assert(strcmp(c.getAutor(),p) == 0);
	c.setStatus(s);
	assert(strcmp(c.getStatus(), s) == 0);
	c.setTitlu(t);
	assert(strcmp(c.getTitlu(), t) == 0);
	Carte c1(t1, p1, s1);
	assert(strcmp(c1.getAutor(), p1) == 0);
	assert(strcmp(c1.getStatus(), s1) == 0);
	assert(strcmp(c1.getTitlu(), t1) == 0);
	delete[] p;
	delete[] s;
	delete[] t;
	delete[] p1;
	delete[] s1;
	delete[] t1;
}
void testRepo() {
	Repo<Carte> r;
	assert(r.dimensiune() == 0);
	char* p = new char[50];
	strcpy_s(p, strlen("Ion") + 1, "Ion");
	char* s = new char[50];
	strcpy_s(s, strlen("imprumutat") + 1, "imprumutat");
	char* t = new char[50];
	strcpy_s(t, strlen("Painea") + 1, "Painea");
	char* p1 = new char[50];
	strcpy_s(p1, strlen("Vlad") + 1, "Vlad");
	char* s1 = new char[50];
	strcpy_s(s1, strlen("neimprumutat") + 1, "neimprumutat");
	char* t1 = new char[50];
	strcpy_s(t1, strlen("Sfarsit") + 1, "Sfarsit");
	Carte c(p, s, t);
	r.addElem(c);
	assert(r.dimensiune() == 1);
	Carte c1(p1, s1, t1);
	r.addElem(c1);
	assert(r.dimensiune() == 2);
	cout << "a trecut" << endl;
}