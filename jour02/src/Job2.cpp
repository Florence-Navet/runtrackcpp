/*****************************************************************************
 *  Considérons le programme en C++ suivant, quel résultat affiche-t-il
 * pour n = 0, n=1, n=4, n=10 et n=-5 :
 *
 * #include <iostream>
 * int main() {
 *    int n;
 *   std::cin >> n;
 *   switch (n)
 * {
 *  case 0: std::cout << "Nul\n";
 *  case 1: ;
 *  case 2: std::cout << "Petit\n";
 * break;
 * case 3:
 * case 4:
 * case 5: std::cout << "Moyen\n";
 * default: std::cout << "Grand\n";
 * }
 *
 *
 *nul et petit -> pour les resultats
 *********************************************************************************/

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    switch (n)
    {
    case 0:
        std::cout << "Nul\n";
    case 1:;
    case 2:
        std::cout << "Petit\n";
        break;
    case 3:
    case 4:
    case 5:
        std::cout << "Moyen\n";
    default:
        std::cout << "Grand\n";
    }
}
