#include <iostream>
#include "Test.h"
#include "UI.h"
int main()
{
    test();
    testRepo();
    testService();
    testRepoFile();
    testImprumutare();
    RepoFile<Carte> r;
    r.loadFromFile("Citire.txt");
    Service s(r);
    UI u(s);
    u.Meniu();
    return 0;
}

