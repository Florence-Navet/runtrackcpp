#include <iostream>
#include <vector>
#include <iterator> // pour std::advance

using std::cout;
using std::endl;
using std::advance;

int main() {
    std::vector<int> v;
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



    // for (auto it = v.begin(); it != v.end(); ++it) {
    //     *it = *it+1;
    //     cout << *it << endl;
    // }


    // it = v.begin();
    // advance(it, 4); // Aller au 5ᵉ élément
    // cout << "Cinquième élément : " << *it << endl;

    return 0;
}
