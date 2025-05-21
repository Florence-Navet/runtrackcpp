#include <iostream>
#include <exception>

using std::cout;
using std::endl;

double diviser(int a, int b) {
        if (b == 0) {
                throw std::runtime_error("division par zero");
        }
        return a / b;
}

int main() {

        try
        {
                    diviser(4,0);
                /* code */
        }
        catch(const std::exception& e)
        {
                std::cerr << e.what() << '\n';
        }
        
    


        return 0;
}