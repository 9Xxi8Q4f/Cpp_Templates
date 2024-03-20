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

void ptr_releasing_and_deleting(){
    int *ptr_num1 {nullptr};
    *ptr_num1 = 10;

    //deleting the pointer
    delete ptr_num1;
    ptr_num1 = nullptr;
    cout << "ptr_num1 : " << ptr_num1 << endl;

} 

void ptr_init(){
    int *ptr_number1{new int}; //Memory location contains junk value
    int *ptr_number2{new int(10)}; //Memory location contains 10 -directly initialized value
    int *ptr_number3{new int{10}}; //Memory location contains 10 -uniform initialized value

    //print adressesw and values
    cout << "ptr_number1 : " << ptr_number1 << endl;
    cout << "ptr_number2 : " << ptr_number2 << endl;
    cout << "ptr_number3 : " << ptr_number3 << endl;
    cout << "*ptr_number1 : " << *ptr_number1 << endl;
    cout << "*ptr_number2 : " << *ptr_number2 << endl;
    cout << "*ptr_number3 : " << *ptr_number3 << endl;

    //* Release the memory
    delete ptr_number1; ptr_number1 = nullptr;
    delete ptr_number2; ptr_number2 = nullptr;
    delete ptr_number3; ptr_number3 = nullptr;
}

void nullptr_checking(){

    int *ptr_num1{};
    int *ptr_num2{nullptr};

    if (!(ptr_num1 == nullptr)) {
        cout << "ptr_num1 points to a VALID adress : " << ptr_num1 << endl;}
    else {
        cout << "ptr_num1 points to a INVALID adress : " << ptr_num1 << endl;}

    if (!(ptr_num2 == nullptr)) {
        cout << "ptr_num2 points to a VALID adress : " << ptr_num1 << endl;}
    else {
        cout << "ptr_num2 points to a INVALID adress : " << ptr_num1 << endl;}


    //* Compact Version
    //* if true : it is not nullptr
    if (ptr_num1){ cout << "ptr_num1 points to a VALID adress : " << ptr_num1<< endl;}
    else { cout << "ptr_num1 points to a INVALID adress : " << ptr_num1 << endl; }

    //! It is okay to delete a nullptr

}

void memory_leaks(){

    /* 
    ! Memory Leaks
    *int *p_number {new int{67}}; // Points to some address, let's call that address1
    
    //*Should delete and reset here 
    
    *int number{55}; // stack variable
    
    *p_number = &number; // Now p_number points to address2 , but address1 is still in use by 
                        //* our program. But our program has lost access to that memory location.
						//*Memory has been leaked.
    */


	//!Double allocation 
    /*
    int *p_number1 {new int{55}};
    
	//Use the pointer
    
	//Should delete and reset here.
	
    p_number1 = new int{44}; // memory with int{55} leaked.

    delete p_number1;
    p_number1 = nullptr;
    */

	//! Nested scopes with dynamically allocated memory
	{
		int *p_number2 {new int{57}};

        //Use the dynamic memory

	}
	//Memory with int{57} leaked.

    std::cout << "Program ending well" << std::endl;
}

int main(){
    nullptr_checking();
    return 0;}