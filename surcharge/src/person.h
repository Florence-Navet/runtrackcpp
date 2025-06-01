#ifndef __PERSON_H__
#define __PERSON_H__
#include <iostream>


class Person {
        private:
        int m_age{0};
       


        public:
        Person(int age);

        /*avec la fonction friend rajouter setteur et getteur*/
        void setAge(const int age);
        int getAge() const { return m_age; }

        // friend Person operator+(const Person& p1, const Person& p2);
        Person operator+(const Person& p1);
        Person operator+(int valeur);
        

        friend std::ostream& operator<<(std::ostream& out, const Person& p );

        friend bool operator<(const Person& p1, const Person& p2);
};



#endif
