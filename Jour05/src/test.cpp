#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>
using namespace std;

struct Salle {
    string nom;
    int capacite = 1;
    int fourmis_actuelles = 0;
    vector<string> voisins;
};

struct Fourmi {
    int id;
    vector<string> chemin;
    int position = 0;
};

unordered_map<string, Salle> graphe;

vector<string> trouver_chemin(string depart, string arrivee) {
    unordered_map<string, string> parent;
    queue<string> q;
    q.push(depart);
    parent[depart] = "";

    while (!q.empty()) {
        string actuel = q.front(); q.pop();
        if (actuel == arrivee) break;
        for (string& voisin : graphe[actuel].voisins) {
            if (!parent.count(voisin)) {
                parent[voisin] = actuel;
                q.push(voisin);
            }
        }
    }

    vector<string> chemin;
    for (string a = arrivee; !a.empty(); a = parent[a])
        chemin.push_back(a);
    reverse(chemin.begin(), chemin.end());
    return chemin;
}

void simuler(vector<Fourmi>& fourmis) {
    int etape = 1;
    while (!fourmis.empty()) {
        cout << "=== Étape " << etape << " ===" << endl;
        vector<Fourmi> restantes;
        bool deplacement = false;

        for (auto& fourmi : fourmis) {
            if (fourmi.position + 1 < fourmi.chemin.size()) {
                string actuel = fourmi.chemin[fourmi.position];
                string suivant = fourmi.chemin[fourmi.position + 1];

                Salle& salleSuivante = graphe[suivant];

                if (salleSuivante.fourmis_actuelles < salleSuivante.capacite) {
                    // Déplacement possible
                    graphe[actuel].fourmis_actuelles--;
                    salleSuivante.fourmis_actuelles++;
                    fourmi.position++;
                    cout << "Fourmi f" << fourmi.id << " : " << actuel << " → " << suivant << endl;
                    deplacement = true;
                }

                if (fourmi.chemin[fourmi.position] != "Sortie") {
                    restantes.push_back(fourmi);
                }
            }
        }

        if (!deplacement) {
            cout << "Aucun déplacement possible à cette étape." << endl;
            break;
        }

        fourmis = restantes;
        etape++;
        cout << endl;
    }
}

void afficher_graphe() {
    cout << "\n--- Graphe de la fourmilière ---\n";
    cout << "       [Entrée] (cap: " << graphe["Entrée"].capacite << ")\n";
    cout << "         /       \\\n";
    cout << "        /         \\\n";
    cout << "   [Salle1] (" << graphe["Salle1"].capacite << ")     [Salle2] (" << graphe["Salle2"].capacite << ")\n";
    cout << "        \\         /\n";
    cout << "         \\       /\n";
    cout << "       [Sortie] (cap: " << graphe["Sortie"].capacite << ")\n";
    cout << "---------------------------------\n\n";
}

int main() {
    std::setlocale(LC_ALL, "");

    // Définition des salles
    graphe["Entrée"] = {"Entrée", 2};
    graphe["Salle1"] = {"Salle1", 1};
    graphe["Salle2"] = {"Salle2", 1};
    graphe["Sortie"] = {"Sortie", 2};

    // Connexions
    graphe["Entrée"].voisins = {"Salle1", "Salle2"};
    graphe["Salle1"].voisins = {"Sortie"};
    graphe["Salle2"].voisins = {"Sortie"};

    afficher_graphe();

    // Création des fourmis
    vector<Fourmi> fourmis;
    for (int i = 1; i <= 3; ++i) {
        Fourmi f;
        f.id = i;
        f.chemin = trouver_chemin("Entrée", "Sortie");
        graphe["Entrée"].fourmis_actuelles++;
        fourmis.push_back(f);
    }

    // Simulation
    simuler(fourmis);

    cout << "\nSimulation terminée. Appuyez sur Entrée pour quitter.";
    cin.get();
    return 0;
}
