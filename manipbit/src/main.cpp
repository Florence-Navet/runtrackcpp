#include <iostream>
#include <bitset>

int main() {
    std::bitset<4> a("1100");
    std::bitset<4> b("1010");

    std::cout << "a     = " << a << '\n';
    std::cout << "b     = " << b << '\n';

    // Opérations logiques
    std::cout << "a AND b = " << (a & b) << '\n';   // 1000
    std::cout << "a OR  b = " << (a | b) << '\n';   // 1110
    std::cout << "a XOR b = " << (a ^ b) << '\n';   // 0110
    std::cout << "NOT a   = " << (~a) << '\n';      // 0011 (inverse bit à bit)

    return 0;
}
