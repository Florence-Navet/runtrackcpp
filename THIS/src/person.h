#ifndef PERSON_H
#define PERSON_H

class Person
{
private:
    int m_age{0};

public:
    void setAge(const int age);
    void afficherAge();

    void reset();
    Person &ajouter(int value);
    Person &retirer(int value);
};

#endif