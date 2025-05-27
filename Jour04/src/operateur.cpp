#include <iostream>


using std::cout;
using std::endl;


int main() {
    int x{4},y{10};
    int* ptr(&x);

    *ptr = 5;

    cout<<x;

/*ptr c'est l'adresse
 alors que *ptr c'est la valeur pointe par ptr*/


    return 0;
}