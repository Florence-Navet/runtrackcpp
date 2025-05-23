/*static_cast<[type de destination]>([variable à convertir])*/

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    float a(4.5);
    char b{'f'};
    // int b(static_cast<int>(a));
    // cout << "b =  " << b << endl;
    cout << "a = " << static_cast<int>(a) << endl;
    cout << "b = " << static_cast<short>(b) << endl;

    return 0;
}
