#include <filesystem>
#include <iostream>

int main() {
    std::cout << "Working directory: " << std::filesystem::current_path() << "\n";
    // rest of your code
}