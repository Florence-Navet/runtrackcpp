#include <iostream>
#include <type_traits>
#include <concepts>

using std::cout;
using std::endl;

template<typename T>
concept EstNombre = std::is_arithmetic_v<T>;

template <typename T>
concept Printable = requires(T a) {
    { std::cout << a } -> std::same_as<std::ostream&>;
};

template <typename T> requires EstNombre<T> && Printable<T>
void afficher(T x) {
    std::cout << x << std::endl;
}

struct MyStruct {
    int a;
    int b;
    float c;
};

int main() {
    afficher(1);        // OK
    afficher(1.5);      // OK
    afficher(true);     // OK
    // afficher(MyStruct{}); // Erreur, MyStruct ne peut pas être affiché

    return 0;
}