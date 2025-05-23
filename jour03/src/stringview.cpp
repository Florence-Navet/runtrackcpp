#include <iostream>
#include <string>
#include <string_view>

using std::cout;
using std::endl;
using std::string;
using std::string_view;

using namespace std::literals::string_literals;
using namespace std::literals::string_view_literals;

void afficherChaine(string_view chaine_a_afficher)
{
    cout << "La chaine est : " << chaine_a_afficher << endl;
}

string_view maFunction(bool valeur)
{
    string_view si_true{"true"};
    string_view si_false{"false"};
    if (valeur)
    {
        return si_true;
    }
    else
    {
        return si_false;
    }
}
int main()

{

    constexpr string_view chaine_constexpr("Tristan dit des bétises"sv);
    // string_view chaine("Bonjour Chouquette"sv);
    string chaine_string("Hello !!"s);
    string_view chaine(chaine_string);

    afficherChaine("Kevin se marre !!!");
    afficherChaine(chaine);
    afficherChaine(chaine_string);
    cout << "La chaine ici est : " << chaine << endl;
    cout << "La chaine est : " << chaine_string << endl;

    chaine_string = "Tristan est revenu";
    chaine = chaine_string;
    afficherChaine(chaine_string);
    cout << "La chaine là est : " << chaine << endl;
    cout << "La chaine là est : " << chaine_string << endl;

    // string_view chaine2(chaine_string);
    // string_view chaine3(chaine2);
    constexpr string_view chaine3("Ma super chaine");

    cout << maFunction(true) << endl;

    return 0;
}