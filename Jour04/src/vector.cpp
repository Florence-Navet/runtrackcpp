#include <iostream>
#include <array>
#include <cassert>

using std::cout;
using std::endl;
using std::array;

namespace Eleves {
    enum Noms {
        Kevin,
        Quentin,
        Tristan,
        Julien,
        Gavriella,
        max_eleves,
    };
}

int main() {
    constexpr std::array<int, Eleves::max_eleves> notes = {17, 18, 19, 8, 10};

    static_assert(notes.size() == Eleves::max_eleves, "Erreur : taille incorrecte !");

    cout << "Note de Kevin : " << notes[static_cast<int>(Eleves::Kevin)] << endl;

    return 0;
}
