#include <iostream>
#include "person.h"


using std::cout;
using std::endl;

int main() {

        Person a{55};
        Person b{35};
        Person c (a+10);

        cout << "L'age de la personne a est :" <<  c.getAge() << "\n";
        cout << c << "\n";
        if (a < b) {
                cout << "a est plus petit que b\n" << a << " " << b;
                } else {
                 cout << "a est plus grand que b\n" << a << " " << b;
                }


        return 0;
}