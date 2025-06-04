#include <iostream>
#include <array>
#include <algorithm>

void print(std::array<int, 10>,arr) {
    for (auto a : arr) {
        std::cout<<a<<" ";
    }
    std::cout<<"\n";
}

int main() {
    std::array<int, 10> s {2, 7, 16, 56, 10, 6, 5, 9, 15, 3};
    std::cout<<"Avant le std::sort()\n";
    print(s);

    std::cout<<"Après le std::sort()\n";
    print(s);

    return 0;
}