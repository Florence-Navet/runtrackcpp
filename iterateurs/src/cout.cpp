#include <iostream>

// #include <vector>
// #include <iterator> // pour std::advance

#include <algorithm>
#include <array>
#include <functional>
#include <numeric>

using std::cout;
using std::endl;
// using std::advance;


void print(std::array<int, 10> arr) {
    for (auto a : arr) {
        std::cout << a << " ";
    }
    std::cout << "\n";
}
int incrementByOne (int x) {
    return x+1;
}
bool estPair(int i) {
    return(i %2 == 0) ? true : false;
}
bool isEven(int x) { return x % 2 == 0; }

int main() {
    std::setlocale(LC_ALL, ".utf8");

    /** 
     *     std::vector<int> v;
    v.assign(5, 10); // Remplit le vecteur avec 5 éléments de valeur 10
    std::vector<int>::iterator it;
    it = v.begin();
    it[2]= 2;
    it[4]= 4;

    for (it = v.begin(); it != v.end(); ++it) {
        *it = *it+1;
        cout <<*it<<endl;
    }

    it = v.begin() + 2;
    v.insert(it,255);

    std::cout<<"---------------------------"<<"`n";

    for (it = v.begin(); it != v.end(); ++it) {
        *it = *it+1;
        cout <<*it<<endl;
    }

     * 
    */


    std::array<int, 10> s {2, -1, 9, 40, 6, 10, 9, -5, 1, 112};

    //reverse
    std::cout<<"Avant le std::reverse()\n";
    print(s);
    std::reverse(s.begin(), s.end());
    std::cout<<"Après le std::reverse()\n";
    print(s);

    //remove
    std::cout<<"Avant le std::remove()\n";
    print(s);
    std::remove(s.begin(), s.end(), 40);
    std::cout<<"Après le std::remove()\n";
    print(s);

    //sort
    std::cout<<"Avant le std::sort()\n";
    print(s);

    std::cout<<"Après le std::sort()\n";

    //count
    std::cout << "Avant le std::count()\n";
    print(s);
    std::cout<<std::count(s.begin(),s.end(),7);
    std::cout << "Après le std::count()\n";
    print(s);

        //count_if
    std::cout << "Avant le std::count_if()\n";
    print(s);
    std::cout<<std::count_if(s.begin(),s.end(),estPair);
    std::cout << "Après le std::count_if()\n";
    print(s);

    //less dans l'autre sens
    std::sort(s.begin(), s.end(), std::greater<int>());
    print(s);

    //fonction find :
   auto it = std::find(s.begin(), s.end(), -5);

    if (it != s.end()) {
        std::cout << "Element trouvé à la position :" << it - s.begin() << "\n";
    } else {
        std::cout << "Elément non trouvé \n";
    }


    //fonction transform
    std::transform(s.begin(), s.end(), s.begin(), incrementByOne);
    print(s);

    //fonction accumulate -  include numeric
    auto sum = std::accumulate(s.begin(), s.end(), 0);
    //calcul des trois premiers elements
    auto sum2 = std::accumulate(s.begin(), s.begin()+3, 0);
    std::cout << "Le total de mon array est "<< sum << "\n";
    std::cout << "Le total de mes trois premiers éléments sont "<< sum2<<"\n";

    // std::array<int, 10> arr = {2, 7, 16, 56, -5, 3, 10, 9, 6, 5};

     //unique
    // std::cout << "Avant le std::unique()\n";
    // print(s);
    // auto last = std::unique(s.begin(), s.end());
    // s.erase(last, s.end());
    // std::cout << "Après le std::unique()\n";
    // print(s);

    //partition
    // auto it = std::partition(s.begin(), s.end(), isEven);
    // for (int n : s) {
    //     std::cout << n << " ";
    // }
    // std::cout << std::endl;






    // for (auto it = v.begin(); it != v.end(); ++it) {
    //     *it = *it+1;
    //     cout << *it << endl;
    // }


    // it = v.begin();
    // advance(it, 4); // Aller au 5ᵉ élément
    // cout << "Cinquième élément : " << *it << endl;

    return 0;
}
