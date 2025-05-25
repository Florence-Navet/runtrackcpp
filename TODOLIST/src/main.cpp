#include <iostream>
#include "todo_list.hpp"
#include "csv_handler.hpp"

/*
TODO :
- faire les try catch
- faire les heures des taches
- marquer quand taches est terminés
- faire un ihm pour la todo
*/

int main()
{
    TodoList todoList;
    std::string filename = "tasks.csv";

    // Charger les tâches existantes depuis le fichier CSV
    todoList.tasks = loadFromCSV(filename);

    int choix;
    do
    {
        std::cout << "\n--- TODO LIST ---\n";
        std::cout << "1. Ajouter une tâche\n";
        std::cout << "2. Supprimer une tâche\n";
        std::cout << "3. Modifier une tâche\n";
        std::cout << "4. Afficher les tâches\n";
        std::cout << "5. Quitter\n";
        std::cout << "Choix : ";
        std::cin >> choix;
        std::cin.ignore(); // Éviter les soucis avec std::getline

        switch (choix)
        {
        case 1:
        {
            std::string task;
            std::cout << "Nouvelle tâche : ";
            std::getline(std::cin, task);
            addTask(todoList, task);
            saveToCSV(todoList.tasks, filename);
            break;
        }
        case 2:
        {
            int index;
            std::cout << "Index de la tâche à supprimer : ";
            std::cin >> index;
            removeTask(todoList, index - 1); // Ajustement de l'index
            saveToCSV(todoList.tasks, filename);
            break;
        }
        case 3:
        {
            int index;
            std::string newTask;
            std::cout << "Index de la tâche à modifier : ";
            std::cin >> index;
            std::cin.ignore();
            std::cout << "Nouvelle description : ";
            std::getline(std::cin, newTask);
            modifyTask(todoList, index - 1, newTask);
            saveToCSV(todoList.tasks, filename);
            break;
        }
        case 4:
            displayTasks(todoList);
            break;
        case 5:
            std::cout << "Sauvegarde et fermeture du programme." << std::endl;
            break;
        default:
            std::cout << "Choix invalide, réessayez." << std::endl;
        }
    } while (choix != 5); // Correction ici

    return 0;
}
