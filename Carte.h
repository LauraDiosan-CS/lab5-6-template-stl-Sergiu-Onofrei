#pragma once
# include <ostream>
using namespace std;
class Carte {
private:
	char* titlu;
	char* autor;
	char* status;
public:
	Carte();
	Carte(const char* t,const  char* a, const char* s);
	Carte(const Carte& c);
	~Carte();
	char* getTitlu();
	char* getAutor();
	char* getStatus();
	void setTitlu(char* newTitlu);
	void setAutor(char* newAutor);
	void setStatus(char* newStatus);
	bool operator==(const Carte& c);
	Carte& operator=(const Carte& c);
	friend ostream& operator<<(ostream& os, const Carte& c)
	{
		os << c.titlu << "  " << c.autor << " " << c.status << " " << endl;
		return os;
	}
};
