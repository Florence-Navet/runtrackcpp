#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include "task.h"
#include <vector>
#include <string>

void afficherMenu();
void afficherTache(const Tache &Tache);
void ajouterTache(std::vector<Tache> &Taches);
void supprimerTache(std::vector<Tache> &Taches);
void afficherTaches(const std::vector<Tache> &Taches);
void marquerTacheTerminee(std::vector<Tache> &Taches);
void editerTache(std::vector<Tache> &Taches);
void sauvegarderTachesCSV(const std::vector<Tache> &taches, const std::string &nomfichier = "todo.csv");
void chargerTachesDepuisCSV(std::vector<Tache> &tache, const std::string &nomfichier = "todo.csv");

#endif