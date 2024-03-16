#include <iostream>

int main() {
    // const int  max_length{ 15 };
    // char name[max_length]{};

    // std::cout << "What's your name dear :" << std::endl;

    // std::cin.getline(name, max_length); // Get input with spaces

    // std::cout<< "Hello, " << name << std::endl;

    int arr[] = {1, 2, 3, 4, 5};

    int packages [] [4] {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };

    std::cout << "Size of array: " << std::size(packages) << std::endl;

    for(size_t i{0} ; i < std::size(packages); ++ i){

        for(size_t j{0}; j < std::size(packages[i])  ; ++j){

            std::cout << packages[i][j] << "   ";
        }
        std::cout << std::endl;
    }

    std::cout<< packages<<std::endl;
}