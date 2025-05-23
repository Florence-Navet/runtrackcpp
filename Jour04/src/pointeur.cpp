#include <iostream>


using std::cout;
using std::endl;

/*Le pointeur prend la valeur de l'adresse*/


int main() {
    int x{2};
    int* ptr{&x};

    // int* ptr(nullptr);
    
    if(ptr == nullptr) {
        cout <<"mon pointeur ne pointe vers rien"<<endl;
    }else {
        cout << "Valeur de mont pointeur est : " <<ptr<<endl;
    }

    // cout<<"Valeur de x : " << x <<endl;
    // cout<<"ADresse de x : " << &x<<endl;
    // cout<<"Valeur de x : " << ptr<<endl;
    // cout<<"adresse de x : " <<&ptr<<endl;


    return 0;

}




