
#include "person.h"
#include <iostream>

Person::Person(int age) 
{
        m_age = age;
}

Person Person::operator+(const Person &p1)
{
        return Person(p1.m_age + m_age);
}

Person Person::operator+(int valeur)
{
        return this->m_age+valeur;
}

void Person::setAge(const int age)
{
    if (age >= 0)
    {
        this->m_age = age; // ← point-virgule ajouté ici
    }
    else
    {
        std::cerr << "Age incorrect\n";
    }
}


// Person operator+(const Person &p1, const Person &p2)
// {
//         return Person(p1.m_age + p2.m_age);
// }
std::ostream& operator<<(std::ostream& out, const Person& p)
{
    out<< " Person : (" << p.m_age << ");\n";

    return out;
}

bool operator<(const Person &p1, const Person &p2)
{
     return p1.m_age < p2.m_age;
}
