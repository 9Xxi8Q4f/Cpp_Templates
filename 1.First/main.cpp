#include <iostream>

// * COMMENTS
//? This is a comment
/*
* So is this a comment too
! This is also a comment
*/

// * FUNCTIONS
int addNumber(int a, int b) {
    return a + b;
}

int main() {

    std::cout << "Hello, World!" << std::endl;

    /*
    * std::cerr ; prints errors
    * std::cin ; takes input
    * std::cout ; prints output
    * std::clog ; prints logs
    */

    std::cout << "Give me number : " << std::endl;
    int number;
    std::cin >> number;
    std::cout << "Added Numbers: " << addNumber(number, 3) << std::endl;
    
    std::cout << "Name: " << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;
    
    //! MULTIPLE INPUT - Doesnt Work!!
    // std::cout << "Type name and age: " << std::endl;
    // std::string name2;
    // int age;
    // std::getline(std::cin >> std::ws, name2);
    // // Clear input buffer to handle newline
    // std::cin.ignore();
    // std::cin >> age;
    // std::cout << "Hello, " << name2 << " " << age << std::endl;
    

    return 0;

}

void integers_(int value) {

    //* INT VARIABLES

    int alpha; //! Undefined, may contain garbage value
    int one{}; //* 0
    int two{1}; //* 1
    int sum { one + two }; //* 0 + 1 = 1

    std::cout << "Sum: " << sum << std::endl;

    int a = 1;
    int b = 2;
    int c = a + b;
    std::cout << "Sum: " << c << std::endl;

    int lips = 2.9; //! Compiler error. Output is 2
    std::cout << "Lips: " << lips << std::endl;

    //* Sizes of types
    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of c: " << sizeof(c) << std::endl;

    //* Signed, unsigned, shor and long types
    /*
    * Short is 16 bits and 2 bytes
    * int is 32 bits and 4 bytes
    * long is 64 bits and 8 bytes
    */

    unsigned int value3 {4};
    //unsigned int value4{-5}; // Compiler error.

    //short and long
    short short_var {-32768} ; //  2 Bytes 
    short int short_int {455} ; // 
    signed short signed_short {122}; //
    signed short int signed_short_int {-456}; // 
    unsigned short int unsigned_short_int {456};
    
    int int_var {55} ; // 4 bytes
    signed signed_var {66};//
    signed int signed_int {77};//
    unsigned int unsigned_int{77};
    
    long long_var {88}; // 4 OR 8 Bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int{44};

    long long long_long {888};// 8 Bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234};
}

void fractionals_() {
    /* 
    * Floating point types: used to represent numbers with a fractional part
    - float: size 4 
    - double: size 8 (recommended default)
    - long double: size 12
    */

    float number1 {1.12345678901234567890f}; // Precision : 7
    double number2 {1.12345678901234567890}; // Precision : 15
    long double number3  {1.12345678901234567890L}; // Precision : 15+
}
