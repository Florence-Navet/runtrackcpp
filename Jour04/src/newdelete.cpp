#include <iostream>


using std::cout;
using std::endl;

int main() {
    int x{};
    int*ptr(new int);
    *ptr =10;

    cout<<"Valeur de ptr : "<<*ptr <<endl;
    delete ptr;
    ptr = nullptr;
    cout<<"Valeur de ptr : "<<*ptr <<endl;


    return 0;
}