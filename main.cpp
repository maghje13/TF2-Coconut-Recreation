#include <iostream>
#include <fstream>

int main() {
    std::ifstream coconut;
    coconut.open("coconut.jpg");
    if (!coconut) {
        std::cout << "coconut missing!" << "\n";
        coconut.close();
        exit(0);
    }
    else {
        coconut.close();
    }

    std::cout << "Hello World!" << "\n";
    return 0;
}