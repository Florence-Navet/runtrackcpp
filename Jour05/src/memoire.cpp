#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

template <typename T>
void showMinMax()
{
    cout << " min: " << numeric_limits<T>::min();
    cout << " max: " << numeric_limits<T>::max();
}

int main()
{

    std::cout << std::left; // left justify output
    // Boolean
    std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
    // Chars
    std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
    std::cout << std::setw(16) << "wchar_t:" << sizeof(wchar_t) << " bytes\n";
    // Fonctionne uniquement en C++20 : std::cout << std::setw(16) << "char:" << sizeof(char8_t) << " bytes\n";
    std::cout << std::setw(16) << "char16_t:" << sizeof(char16_t) << " bytes\n";
    std::cout << std::setw(16) << "char32_t:" << sizeof(char32_t) << " bytes\n";
    // Integers
    std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
    std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
    std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
    std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";
    // Floats type
    std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
    std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
    std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";

    std::cout << "float:";
    showMinMax<float>();
    std::cout << std::endl
              << "double:";
    showMinMax<double>();
    std::cout << std::endl
              << "long double:";
    showMinMax<long double>();
    std::cout << std::endl
              << "char:";
    showMinMax<char>();
    std::cout << std::endl
              << "wchar_t:";
    showMinMax<wchar_t>();
    std::cout << std::endl
              << "char16_t:";
    showMinMax<char16_t>();
    std::cout << std::endl
              << "char32_t:";
    showMinMax<char32_t>();

    return 0;
}