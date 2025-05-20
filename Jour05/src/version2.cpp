#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Énumération pour les choix possibles
enum Choix { 
    PIERRE, 
    FEUILLE, 
    CISEAUX };

// Fonction pour afficher les règles
void afficherRegles() {
    cout << "Bienvenue dans le jeu Pierre-Feuille-Ciseaux !" << endl;
    cout << "Règles : Pierre bat Ciseaux, Ciseaux bat Feuille, Feuille bat Pierre.\n" << endl;
}

// Fonction pour convertir un choix en texte
string choixEnTexte(Choix c) {
    switch (c) {
        case PIERRE: 
        return "Pierre";
        case FEUILLE: 
        return "Feuille";
        case CISEAUX: 
        return "Ciseaux";
        default: return "";
    }
}

// Fonction pour déterminer le gagnant
int determinerGagnant(Choix joueur, Choix ordinateur) {
    if (joueur == ordinateur)
        return 0; // Égalité
    else if ((joueur == PIERRE && ordinateur == CISEAUX) ||
             (joueur == FEUILLE && ordinateur == PIERRE) ||
             (joueur == CISEAUX && ordinateur == FEUILLE))
        return 1; // Joueur gagne
    else
        return -1; // Ordinateur gagne
}

int main() {
    srand(time(nullptr)); // Initialisation de l'aléatoire
    int scoreJoueur = 0, scoreOrdi = 0;
    char recommencer;

    afficherRegles();

    do {
        int choixUtilisateur;
        cout << "Faites un choix (0 = Pierre, 1 = Feuille, 2 = Ciseaux) : ";
        cin >> choixUtilisateur;

        if (choixUtilisateur < 0 || choixUtilisateur > 2) {
            cout << "Choix invalide. Réessayez.\n";
            continue;
        }

        Choix joueur = static_cast<Choix>(choixUtilisateur);
        Choix ordinateur = static_cast<Choix>(rand() % 3);

        cout << "Vous avez choisi : " << choixEnTexte(joueur) << endl;
        cout << "L'ordinateur a choisi : " << choixEnTexte(ordinateur) << endl;

        int resultat = determinerGagnant(joueur, ordinateur);
        if (resultat == 0) {
            cout << "Égalité !\n";
        } else if (resultat == 1) {
            cout << "Vous gagnez ce tour !\n";
            scoreJoueur++;
        } else {
            cout << "L'ordinateur gagne ce tour !\n";
            scoreOrdi++;
        }

        cout << "Score - Vous : " << scoreJoueur << " | Ordinateur : " << scoreOrdi << "\n";

        cout << "\nVoulez-vous rejouer ? (o/n) : ";
        cin >> recommencer;
        cout << endl;

    } while (recommencer == 'o' || recommencer == 'O');

    cout << "Merci d'avoir joué ! À bientôt :)" << endl;

    return 0;
}
