#include <iostream>
#include <array>

using std::cout;
using std::endl;
using std::array;

using Tableau2D3L5C = array<array<int,5>,3>;


template <typename T, std::size_t Row, std::size_t col>
using Tableau2D = array<array<T, col>,Row>;

int main() {
    array<int, 5> tableau1D {1,2,3,4,5};

    Tableau2D3L5C tableau2D {{
        {1,2,3,4,5},
        {11,13,14,15,16},
        {115,117,118,119,119},
        
    }};

    Tableau2D<int, 3,5 > mon_tableau{};
    cout<<mon_tableau.size()<<endl;
    cout<<mon_tableau[0].size()<<endl;
    // cout<<tableau2D [2][2];
    

    return 0;
}
