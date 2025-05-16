#include <iostream>

int main() {
    char c = '\x01';          // Valeur hexadécimale 0x01 => 1
    short int p = 10;         // p = 10

    // Expressions
    int x = p + 3;
    int y = c + 1;
    int z = p + c;
    int w = 3 * p + 5 * c;

    // Affichage des résultats
    std::cout << "x = p + 3       => " << x << " (type: int)" << std::endl;
    std::cout << "y = c + 1       => " << y << " (type: int)" << std::endl;
    std::cout << "z = p + c       => " << z << " (type: int)" << std::endl;
    std::cout << "w = 3*p + 5*c   => " << w << " (type: int)" << std::endl;

    return 0;
}
