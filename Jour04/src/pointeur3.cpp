#include <iostream>


using std::cout;
using std::endl;

/*Le pointeur prend la valeur de l'adresse*/
struct Test {
    int toto {0};
    int tata {10};

};



int main() {
  
    Test* ptr(new Test);

    (*ptr).tata == 5;
    ptr->tata = 5;

    ptr->toto;
    

    return 0;

}




