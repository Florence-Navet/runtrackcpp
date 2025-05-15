#include <iostream>
#include "constantes.h"
#include "puissance.cpp"
#include "geometrie.h"

int main(){
    std::cout<<calculerPuissance(5)<<std::endl;
    std::cout<<PI<<std::endl;
    std::cout<<multiplier(2, 3)<<std::endl;

    std::cout<<calculerSurfaceCercle(10)<<std::endl;
}