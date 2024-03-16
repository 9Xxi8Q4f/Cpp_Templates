#include <iostream>
using namespace std;

void declearing_pointers() {

    // int * p_number {};
    // double * p_double {};

    // //*Explicitely initializing null pointers
    // int* p_number1{nullptr};
    // int * p_fractional_number1{nullptr};

    // Init pointers and assign them data
    int a{5};
    int* p{&a};

    cout << "a : " << a << endl;
    cout << "p : " << p << endl;
    cout << "*p : " << *p << endl;

    int var{10};
    var = 1045;
    p = &var;
    cout <<"p (with different adresses) : " << p << endl;
    cout << "*p : " << *p << endl;

    var= 11;
    cout << "var : " << var << endl;
    cout << "*p : " << *p << endl;

    //Dereferencing a pointer : 
    int* p_int2 {nullptr};
    int int_data {56};
    p_int2 = &int_data;
    std::cout << "value : " << *p_int2 << std::endl; // Dereferencing a pointer
}

void ptr_char(){

    const char *message {"Hello World!"};
    std::cout << "message : " << message << std::endl;
    cout <<"message : "<< message << endl;
    cout << "value : " << *message << endl;
}


int main() {
    ptr_char();
    return 0;
}