#include <iostream>

#include <string>
#include <fstream>

using std::cout;
using std::endl;

// Utilisation de regex_match

// out : ça écrit par dessus mais app ça écrit à la suite

int main()
{
    std::ifstream mon_fichier("log.txt", std::ofstream::in);

    if (!mon_fichier)
    {
        std::cerr << "fichier non ouvert" << std::endl;
        return 1;
    }

    std::string contenu;

    // while (mon_fichier)
    // {

    //     std::getline(mon_fichier, contenu);
    //     cout << contenu << "\n";
    //

    // beg du debut, cur ce la position actuelle, end la fin
    //      mon_fichier.seekg(0, std::ios::beg);
    mon_fichier.seekg(10, std::ios::beg);
    std::getline(mon_fichier, contenu);
    cout << contenu;

    return 0;
}
