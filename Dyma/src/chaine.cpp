#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
// using namespace std::string_literals;

int main()

{

    string ville{};
    string nom{};

    cout << "choissiez entre 1 et 2" << endl;
    int choice{2};
    std::cin >> choice;

    cout
        << "Quel est ton nom ? " << endl;
    std::getline(std::cin >> std::ws, nom);

    cout << "Quelle est votre ville ? " << endl;
    std::getline(std::cin >> std::ws, ville);

    cout << "\nVotre nom est : " << nom << endl;
    cout << "\nVotre ville est : " << ville << endl;
    return 0;
}