#include "UI.h"
#include <iostream>
void UI::AddCarte(char* t, char* a, char* sta) {
	cout << "Dati un titlu al cartii: ";
	cin >> t;
	cout << "Dati un autor al cartii: ";
	cin >> a;
	cout << "Dati statusul cartii(imprumutat sau nu): ";
	cin >> sta;
	this->s.AddProdus(t, a, sta);
}
void UI::StergereCarte(char* t, char* a, char* sta) {
	cout << "Dati un titlu al cartii: ";
	cin >> t;
	cout << "Dati un autor al cartii: ";
	cin >> a;
	cout << "Dati statusul cartii(imprumutat sau nu): ";
	cin >> sta;
	Carte c(t, a, sta);
	this->s.Stergere(c);
}
void UI::ModificareCarte(char* t, char* a, char* sta) {
	cout << "Dati titlul cartii care vreti sa fie modificat: ";
	cin >> t;
	cout << "Dati autorul cartii noi: ";
	cin >> a;
	cout << "Dati statusul cartii noi(imprumutat sau nu): ";
	cin >> sta;
	Carte c(t, a, sta);
	this->s.Modificare(c);
}
void UI::Meniu(){
    bool val = true;
    char* t = new char[30];
    char *a = new char[30];
    char *sta = new char[30];
    char *t1 = new char[30];
    char *a1 = new char[30];
    char *sta1 = new char[30];
    char *t2 = new char[30];
    char *a2 = new char[30];
    char *sta2 = new char[30];
    int optiune;
    do
    {
        cout << "Dati o optiune:\n0-Iesire\n1-Citire\n2-Afisare\n3-Stergere\n4-Modificare(dupa titlu): ";
        cin >> optiune;
        switch (optiune) {
        case 1: {
            AddCarte(t, a, sta);
            break;}
        case 2: {
            cout << endl;
            cout << "Cartile sunt: " << endl;
            for (int i = 0; i < this->s.getSize();i++) {
                cout << this->s.getAll()[i];
            };break;}
        case 3: {
            StergereCarte(t1, a1, sta1);
            break;
        }
        case 4: {
            ModificareCarte(t2, a2, sta2);
            break;
        }
        case 0: {val = false;break;}
        }
        cout << endl;
    } while (val);
    delete[] t;
    delete[] a;
    delete[] sta;
    delete[] t1;
    delete[] a1;
    delete[] sta1;
    delete[] t2;
    delete[] a2;
    delete[] sta2;
}