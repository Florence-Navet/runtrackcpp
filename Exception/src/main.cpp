#include <iostream>
#include "myexception.h"

using std::cout;
using std::endl;

int main() {

    try {

            throw MyException();
      } catch (MyException me) {
        cout << me.what();
      }
    

    return 0;
}
