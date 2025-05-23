#include <iostream>
#include <array>
#include <algorithm>

// Fonction de tri croissant
void trierCroissant(std::array<int, 5> &arr)
{
    std::sort(arr.begin(), arr.end());
}

// Fonction de tri décroissant
void trierDecroissant(std::array<int, 5> &arr)
{
    std::sort(arr.begin(), arr.end(), std::greater<int>());
}

// Fonction qui utilise un pointeur de fonction pour trier
void trierResultat(std::array<int, 5> &arr, void (*trier)(std::array<int, 5> &))
{
    trier(arr);
}

int main()
{
    std::array<int, 5> tableau = {5, 3, 2, 4, 1};

    // Tri croissant
    trierResultat(tableau, trierCroissant);
    std::cout << "Tri croissant: ";
    for (int n : tableau)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    // Tri décroissant
    trierResultat(tableau, trierDecroissant);
    std::cout << "Tri décroissant: ";
    for (int n : tableau)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}