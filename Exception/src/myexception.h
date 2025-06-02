#include <exception>


class MyException : public std ::exception {
        public:
        // MyException();
        char* what();

};