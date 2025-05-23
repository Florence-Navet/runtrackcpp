#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
// using namespace std::string_literals;

void mettreAuPluriel(string &chaine)
{

    chaine += "s";
}

int main()
{

    string name{"Bruno"};

    mettreAuPluriel(name);
    cout << name << endl;

    cout << "Bonjour ma chouquette !!! " << name << endl;
    cout << "La longueur de la string est : " << name.length() << endl;
    cout << "Taile de la variable name: " << sizeof(name) << endl;

    return 0;
}