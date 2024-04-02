#include <iostream>

void say_age(int* age); //* Declaration Pass by pointer
void say_age(const int* age); //* Declaration Pass by pointer to const

int dog_count{2};

void say_age(const int* const age); //* Declaration Pass by const pointer to const

int main(){

    int age{23}; // Local
    std::cout << "age (before call) : " << age << "&age : " << &age << std::endl; //23
    say_age(&age); // Argument
    std::cout << "age (after call) : " << age << "&age : " << &age <<  std::endl; //24

    return 0;
}

void say_age(int* age){ // Pass by pointer
    ++(*age); 
    std::cout <<  "Hello , you are " << *age << " years old! &age : " << &age <<  std::endl;//24
}

void say_age(const int* age){ // Pass by pointer to const
    //++(*age); //
    std::cout <<  "Hello , you are " << *age << " years old! &age : " << &age <<  std::endl;//24
}

void say_age(const int* const age){ // Pass by const pointer to const
    //++(*age); //
    std::cout <<  "Hello , you are " << *age << " years old! &age : " << &age <<  std::endl;//24
    //age = & dog_count;
}