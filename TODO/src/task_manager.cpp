#include "task_manager.h"
#include <iostream>
#include <fstream>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::vector;

void afficherMenu()
{
    cout << "\n---------- Menu To-Do List ----------\n";
    cout << "1. Ajouter une tâche\n";
    cout << "2. Supprimer une tâche\n";
    cout << "3. Afficher les tâches\n";
    cout << "4. Marquer une tâche comme terminée\n";
    cout << "5. Modifier une tâche\n";
    cout << "6. Quitter\n";
    cout << "-------------------------------------\n";
}

void afficherTache(const Tache &tache)
{
    cout << tache.nom << " (" << (tache.termine ? "Terminée" : "En cours") << ") - Pour le : " << tache.date << endl;
    cout << "   Description : " << tache.description << endl;
}

void ajouterTache(vector<Tache> &taches)
{
    Tache tache;
    cout << "Nom de la tâche : ";
    cin.ignore();
    getline(cin, tache.nom);
    cout << "Description : ";
    getline(cin, tache.description);
    cout << "Date d'échéance (JJ-MM-AAAA) : ";
    getline(cin, tache.date);

    taches.push_back(tache);
    cout << "Tâche ajoutée !" << endl;
}

void supprimerTache(vector<Tache> &taches)
{
    if (taches.empty())
    {
        cout << "Aucune tâche à supprimer." << endl;
        return;
    }

    for (size_t i = 0; i < taches.size(); ++i)
    {
        cout << i + 1 << ". " << taches[i].nom << endl;
    }

    int index;
    cout << "Numéro de la tâche à supprimer : ";
    cin >> index;

    if (index >= 1 && index <= taches.size())
    {
        taches.erase(taches.begin() + index - 1);
        cout << "Tâche supprimée." << endl;
    }
    else
    {
        cout << "Numéro invalide." << endl;
    }
}

void afficherTaches(const vector<Tache> &taches)
{
    if (taches.empty())
    {
        cout << "Aucune tâche à afficher." << endl;
        return;
    }

    for (size_t i = 0; i < taches.size(); ++i)
    {
        cout << i + 1 << ". ";
        afficherTache(taches[i]);
    }
}

void marquerTacheTerminee(vector<Tache> &taches)
{
    if (taches.empty())
    {
        cout << "Aucune tâche à marquer comme terminée." << endl;
        return;
    }

    for (size_t i = 0; i < taches.size(); ++i)
    {
        cout << i + 1 << ". " << taches[i].nom << endl;
    }

    int index;
    cout << "Numéro de la tâche à marquer : ";
    cin >> index;

    if (index >= 1 && index <= taches.size())
    {
        taches[index - 1].termine = true;
        cout << "Tâche marquée comme terminée !" << endl;
    }
    else
    {
        cout << "Numéro invalide." << endl;
    }
}

void editerTache(vector<Tache> &taches)
{
    if (taches.empty())
    {
        cout << "Aucune tâche à modifier." << endl;
        return;
    }

    for (size_t i = 0; i < taches.size(); ++i)
    {
        cout << i + 1 << ". " << taches[i].nom << endl;
    }

    int index;
    cout << "Numéro de la tâche à modifier : ";
    cin >> index;

    if (index >= 1 && index <= taches.size())
    {
        Tache &tache = taches[index - 1];
        cin.ignore();

        cout << "Nouveau nom (actuel : " << tache.nom << ") : ";
        getline(cin, tache.nom);
        cout << "Nouvelle description (actuelle : " << tache.description << ") : ";
        getline(cin, tache.description);
        cout << "Nouvelle date (actuelle : " << tache.date << ") : ";
        getline(cin, tache.date);

        cout << "Tâche mise à jour." << endl;
    }
    else
    {
        cout << "Numéro invalide." << endl;
    }
}

void sauvegarderTachesCSV(const std::vector<Tache> &taches, const std::string &nomfichier)
{
    // Ouvre le fichier en mode écriture
    std::ofstream file(nomfichier);
    if (!file)
    {
        std::cerr << "Erreur lors de l'ouverture du fichier : " << nomfichier << std::endl;
        return;
    }

    // Écriture de l'en-tête du fichier CSV
    file << "Nom,Description,Date,Statut\n";

    // Écriture des tâches dans le fichier CSV
    for (const Tache &tache : taches)
    {
        file << "\"" << tache.nom << "\","
             << "\"" << tache.description << "\","
             << "\"" << tache.date << "\","
             << "\"" << (tache.termine ? "1" : "0") << "\"\n";
    }

    // Fermeture du fichier
    file.close();

    std::cout << "Tâches sauvegardées dans " << nomfichier << " avec succès." << std::endl;
}


void chargerTachesDepuisCSV(vector<Tache> &taches, const string &nomfichier)
{
    std::ifstream file(nomfichier);
    if (!file)
        return;

    string line;
    getline(file, line); // Ignore header

    while (getline(file, line))
    {
        std::stringstream ss(line);
        string nom, description, date, statusStr;

        getline(ss, nom, ',');
        getline(ss, description, ',');
        getline(ss, date, ',');
        getline(ss, statusStr, ',');

        if (nom.front() == '"')
            nom = nom.substr(1, nom.size() - 2);
        if (description.front() == '"')
            description = description.substr(1, description.size() - 2);
        if (date.front() == '"')
            date = date.substr(1, date.size() - 2);

        Tache tache{nom, description, date};
        tache.termine= (statusStr == "1");
        taches.push_back(tache);
    }

    file.close();
}