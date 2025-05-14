#include <iostream>

int main() {
    int x = 3, y = 4, a, b = 2, c = 1, d = 5, i = 1, n = 10, p = 20;

    a = x + 5;
    std::cout << "a = x + 5 => " << a << std::endl;

    a = (x = y) + 2;  // Ici, x reçoit y, puis on ajoute 2
    std::cout << "a = (x = y) + 2 => " << a << ", x = " << x << std::endl;

    a = x == y;
    std::cout << "a = x == y => " << a << std::endl;

    bool result = a < b && c < d;
    std::cout << "a < b && c < d => " << std::boolalpha << result << std::endl;

    int res = i++ * (n + p);  // Ici, on garde les parenthèses pour la lisibilité
    std::cout << "i++ * (n + p) => " << res << ", i after increment = " << i << std::endl;

    return 0;
}
