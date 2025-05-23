#include <iostream>


using std::cout;
using std::endl;



int main() {
    int x{4}, y {10};
    int* ptr{&x};

    *ptr = 5;
    cout<<x;


    for (;*ptr<10;(*ptr)++) {
        cout<<"Valeur de ptr"<<*ptr<<endl;

    }

        cout <<"Adresse ptr :"<<ptr<<endl;
        ptr++;

        cout << "Adresse ptr : " <<ptr<<endl;


    return 0;

}




