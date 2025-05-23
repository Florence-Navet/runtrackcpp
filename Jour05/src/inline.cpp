#include <iostream>

constexpr int additionner (int a, int b) {
    return a + b;
}

int main() {

    constexpr int a {14};
    constexpr int b {12};

    constexpr int c {additionner(a, b)};
    std::cout << "La somme est : " << c << std::endl;

}



