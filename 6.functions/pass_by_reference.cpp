#include <iostream>

void say_age(int& age); //* Declaration Pass by reference
void say_age(const int& age); //* Declaration Pass by cont reference

int main(){

    int age{23}; // Local
    std::cout << "age (before call) : " << age << "&age : " << &age << std::endl; //23
    say_age(age); // Argument
    std::cout << "age (after call) : " << age << "&age : " << &age <<  std::endl; //24

    return 0;
}


void say_age(int& age){ // Pass by reference
    ++age; 
    std::cout <<  "Hello , you are " << age << " years old! &age : " << &age <<  std::endl;//24

}

void say_age(const int& age){ // Parameter
    //++age; 
    std::cout <<  "Hello , you are " << age << " years old! &age : " << &age <<  std::endl;//24

}