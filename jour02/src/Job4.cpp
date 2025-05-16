#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    double a(0), b(0);
    char op;

    cout << "Entrez le premier nombre : ";
    cin >> a;

    cout << "Entrez l'opérateur (+, -, *, /) : ";
    cin >> op;

    cout << "Entrez le deuxième nombre : ";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << "Résultat : " << a + b << endl;
        break;
    case '-':
        cout << "Résultat : " << a - b << endl;
        break;
    case '*':
        cout << "Résultat : " << a * b << endl;
        break;
    case '/':
        if (b != 0)
        {
            cout << "Résultat : " << a / b << endl;
        }
        else
        {
            cout << "Erreur : division par zéro !" << endl;
        }
        break;
    default:
        cout << "Opérateur non reconnu." << endl;
        break;
    }

    return 0;
}
