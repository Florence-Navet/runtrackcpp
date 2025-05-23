#include <iostream>
#include <array>
#include <cassert>

using std::cout;
using std::endl;
using std::array;

int main() {
    // Définition correcte de std::array
    constexpr std::array<int, 5> notes = {17, 18, 19, 8, 10};

    // Affichage des notes avec une boucle
    for (int note : notes) {
        cout << note << endl;
    }

    return 0;
}
