/**
 * @file task.h
 * @author enolaworld@gmail.com
 * @brief definitaion de la structure
 * @version 0.1
 * @date 2025-05-25
 *
 * @copyright Copyright (c) 2025
 *
 */

#ifndef TASK_H
#define TASK_H

#include <string>

struct Tache
{
    std::string nom;
    std::string description;
    std::string date;
    bool termine = false;
};

#endif