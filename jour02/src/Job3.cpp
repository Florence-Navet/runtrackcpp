#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Version utilisant while
void sommeAvecWhile()
{
    int i(0), n(0), som(0);

    while (i < 3)
    {
        cout << "Donnez un entier : ";
        cin >> n;
        som += n;
        i++;
    }

    cout << "Somme (while) : " << som << endl;
}

// Version utilisant do...while
void sommeAvecDoWhile()
{
    int i(0), n(0), som(0);

    do
    {
        cout << "Donnez un entier : ";
        cin >> n;
        som += n;
        i++;
    } while (i < 3);

    cout << "Somme (do...while) : " << som << endl;
}

int main()
{
    sommeAvecWhile();   // Appel de la version avec while
    sommeAvecDoWhile(); // Appel de la version avec do...while

    return 0;
}
