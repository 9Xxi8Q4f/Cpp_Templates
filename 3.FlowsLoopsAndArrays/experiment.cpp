#include <iostream>

int main() {
    const int  max_length{ 15 };
    char name[max_length]{};

    std::cout << "What's your name dear :" << std::endl;

    std::cin.getline(name, max_length); // Get input with spaces

    std::cout<< "Hello, " << name << std::endl;
}