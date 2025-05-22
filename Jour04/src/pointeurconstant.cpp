#include <iostream>


using std::cout;
using std::endl;




int main() {

        const int* ptr = &x;
        *ptr = 10; // Erreur

        int y = 20;
        ptr = &y; // Autorisé
        int* const ptr = &x;
        
        *ptr = 10; // Autorisé
        ptr = &y; // Erreur

        



    return 0;

}










