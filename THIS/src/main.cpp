#include <iostream>
#include "person.h"

using std::cout;
using std::endl;

int main()
{
    Person kevin;
    // Person julien;

    kevin.setAge(31);
    // julien.setAge(24);

    // kevin.afficherAge();
    // julien.afficherAge();
    // kevin.reset();
    // kevin.afficherAge();
    kevin.ajouter(10).retirer(2).ajouter(5).ajouter(4).retirer(8).afficherAge();

    return 0;
}