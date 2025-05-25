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
    cout << tache.name << " (" << (tache.completed ? "Terminée" : "En cours") << ") - Pour le : " << tache.dueDate << endl;
    cout << "   Description : " << tache.description << endl;
}

void ajouterTache(vector<Tache> &taches)
{
    Tache tache;
    cout << "Nom de la tâche : ";
    cin.ignore();
    getline(cin, tache.name);
    cout << "Description : ";
    getline(cin, tache.description);
    cout << "Date d'échéance (YYYY-MM-DD) : ";
    getline(cin, tache.dueDate);

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
        cout << i + 1 << ". " << taches[i].name << endl;
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
        cout << i + 1 << ". " << taches[i].name << endl;
    }

    int index;
    cout << "Numéro de la tâche à marquer : ";
    cin >> index;

    if (index >= 1 && index <= taches.size())
    {
        taches[index - 1].completed = true;
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
        cout << i + 1 << ". " << taches[i].name << endl;
    }

    int index;
    cout << "Numéro de la tâche à modifier : ";
    cin >> index;

    if (index >= 1 && index <= taches.size())
    {
        Tache &tache = taches[index - 1];
        cin.ignore();

        cout << "Nouveau nom (actuel : " << tache.name << ") : ";
        getline(cin, tache.name);
        cout << "Nouvelle description (actuelle : " << tache.description << ") : ";
        getline(cin, tache.description);
        cout << "Nouvelle date (actuelle : " << tache.dueDate << ") : ";
        getline(cin, tache.dueDate);

        cout << "Tâche mise à jour." << endl;
    }
    else
    {
        cout << "Numéro invalide." << endl;
    }
}

void sauvegarderTachesCSV(const vector<Tache> &taches, const string &nomfichier)
{
    std::ofstream file(nomfichier);
    if (!file)
    {
        cout << "Erreur lors de l'ouverture du fichier." << endl;
        return;
    }

    file << "Nom,Description,Date,Statut\n";
    for (const Tache &tache : taches)
    {
        file << '"' << tache.name << "", "" << tache.description << "", "" << tache.dueDate << "", "" << (tache.completed ? "1" : "0") << "\n";
    }

    file.close();
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
        string name, description, dueDate, statusStr;

        getline(ss, name, ',');
        getline(ss, description, ',');
        getline(ss, dueDate, ',');
        getline(ss, statusStr, ',');

        if (name.front() == '"')
            name = name.substr(1, name.size() - 2);
        if (description.front() == '"')
            description = description.substr(1, description.size() - 2);
        if (dueDate.front() == '"')
            dueDate = dueDate.substr(1, dueDate.size() - 2);

        Tache tache{name, description, dueDate};
        tache.completed = (statusStr == "1");
        taches.push_back(tache);
    }

    file.close();
}
