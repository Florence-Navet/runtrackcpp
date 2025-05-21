#include <iostream>
#include <iterator>
#include <array>

using std::cout;
using std::endl;

int main() {

        std::setlocale(LC_ALL, ".utf8");

        
         std::array<int,5> tableau {};
         std::array<int,5> premiers {1,2,3,4,5};
         std::array<int,5> scores {1,2,3,4,5};


        scores [2] = 10;
        cout <<scores.at(2)<<endl;

        cout<<"Taille tableau"<<std::size(scores)<<endl;
        cout<<" La valeur "<<scores[2]<<" est a l'adresse "<<&scores[2]<<endl;


    for(size_t i {0} ; i<tableau.size() ; i++){
        cout<<" La valeur "<<tableau[i]<<" est a l'adresse "<<&tableau[i]<<endl;

        cout<<"Taille du tableau "<<std::size(tableau);
    }

}

