/***********************************************************
 * Soir le programme en C++ illisible ci-dessous :
 do {} while (cout << "donnez un nombre >0 ", cin >>  n,   n<=0)  ;
 Ecrire le programme de façon à ce qu'il soit plus lisible
 *****************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    do
    {
        cout << "donner un nombre > 0 : ";
        cin >> n;
    } while (n <= 0);

    return 0;
}
