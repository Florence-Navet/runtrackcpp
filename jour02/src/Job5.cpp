/*Écrire un programme en C++ qui permet d'évaluer une note saisie au clavier,
si la note est supérieure à 10 alors, il affiche “validé” sinon “non validé”. La
note doit être comprise entre 0 et 20.*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int note = 0;

    while (true)
    {
        cout << "Entrez votre note (0 à 20) : ";
        cin >> note;

        if (cin.fail())
        {
            cin.clear();            // Réinitialise l'état d'erreur de cin
            cin.ignore(1000, '\n'); // Vide le buffer jusqu'à la fin de ligne
            cout << "Erreur : vous devez entrer un nombre entier." << endl;
        }
        else if (note < 0 || note > 20)
        {
            cout << "Erreur : la note doit être comprise entre 0 et 20." << endl;
        }
        else
        {
            break;
        }
    }

    if (note >= 10)
    {
        cout << "Validé" << endl;
    }
    else
    {
        cout << "Non validé" << endl;
    }

    return 0;
}
