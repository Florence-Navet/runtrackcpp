#include <iostream>

using std::cout;
using std::endl;

namespace smartphone
{

    void login()
    {
        cout << "Login on smartphone" << endl;
    }
    void sendNotification()
    {
        cout << "Sending notification on smartphone" << endl;
    }
}

namespace website
{
    void login()
    {
        cout << "Login on website" << endl;
    }
    void sendEmail()
    {
        cout << "Send email" << endl;
    }
}

using website::login;

int main()
{
    website::login();    // Appelle la fonction login de l'espace de nom website
    smartphone::login(); // Appelle la fonction login de l'espace de nom smartphone
    login();             // Appelle la fonction login définie par défaut à la ligne 25 : website::login
}