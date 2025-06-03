#include <iostream>
#include <array>
#include "tableau.h"

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
    // cout << max<int>(1, 4)<< "\n";
    // cout << max<float>(8.2, 4.1)<< "\n";
    // cout << max<float>(1.8, 7.9)<<"\n";
    // cout << max<>(1.8, 7.9)<<"\n";
    /** cout << max(1.8, 7.9)<<"\n";
     on peut sans rien préserver dès qu'l est seul* 
     */

     Tableau<bool> t(4);
     t[0] = true;
     t[1] = true;
     t[2] = false;
     t[3] = true;
   
    return 0;
}