#include <iostream>

using std::cout;
using std::endl;

int max(int x, int y) {
    return (x < y ) ? y : x;
}

double max(double x, double y) {
    return( x < y) ? y : x;
}

template <typename T>
T max(T x, T y) {
    cout << "Template appelé \n";
    return(x < y) ? y : x;
}

int main() {
    cout << max<int>(1, 4)<< "\n";
    cout << max<float>(8.2, 4.1)<< "\n";
    cout << max<float>(1.8, 7.9)<<"\n";
    cout << max<>(1.8, 7.9)<<"\n";
    /** cout << max(1.8, 7.9)<<"\n";
     on peut sans rien préserver dès qu'l est seul* 
     */
   
    return 0;
}