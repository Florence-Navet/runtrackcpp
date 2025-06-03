#include <iostream>

using std::cout;
using std::endl;

template <typename T>
T max(T x, T y) 
{
    cout<<"Tnemplate appele\n";
    return(x < y) ? y :x ;
}

int max(int x, int y) {
    return (x<y) ? y:x;
}

template<>
bool max<bool>(bool x, bool y) {
    cout << "specialisation appelée : \n";
    if(x && y) {
        return true;
    } else {
        return false;
    }
}
int main() {
     cout << max(14.4, 4.6) <<"\n";
     cout << max(true, false) << "\n";


     return 0;
}