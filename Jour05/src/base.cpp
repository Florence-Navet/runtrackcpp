#include <iostream>
#include <bitset>

using std::cout;
using std::endl;

int main()
{
    int ma_variable(15);

    cout << "Base 10: " << ma_variable << endl;
    cout << "Base 8: " << std::oct << ma_variable << endl;
    cout << "Base 16: " << std::hex << ma_variable << endl;
    cout << "Base 2: " << std::bitset<8>(ma_variable) << endl;
}
