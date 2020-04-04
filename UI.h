#pragma once
#include "Service.h"
class UI {
private:
	Service s;
public:
	UI() {}
	void AddCarte(char* t, char* a, char* s);
	void StergereCarte(char* t, char* a, char* s);
	void ModificareCarte(char* t, char* a, char* s);
	void Meniu();
	~UI() {}
};
