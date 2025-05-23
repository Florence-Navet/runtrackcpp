#include <iostream>
#include <string_view>
#include <string>
#include <regex>
#include <fstream>

using std::cout;
using std::endl;

// Utilisation de regex_match

// out : ça écrit par dessus mais app ça écrit à la suite

int main()
{
    std::ofstream outputfile("log.txt", std::ofstream::app);

    if (!outputfile)
    {
        std::cerr << "fichier non ouvert" << std::endl;
        return 1;
    }
    outputfile << "Voici la premiere ligne du texte.\n";
    outputfile << "Voici la deuxieme ligne du texte.\n";

    outputfile.close();

    return 0;
}
