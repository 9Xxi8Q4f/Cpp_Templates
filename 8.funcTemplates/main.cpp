#include <iostream>
#include <string>

//* This allows the function to work with different data types without having to rewrite the function for each specific type.
template <typename T>T maximum(T a , T b){
    return (a > b)? a : b; 
}

template <typename T> const T& minimum(const T& a, const T& b); // Declaration
//template <typename T> T maximum(T a, T b); // Declaration

int main(){

    int x{5};
    int y{7};

    int* p_x {&x};
    int* p_y{&y};

    // auto result = maximum(p_x,p_y);
    // std::cout << "result : " << *result << std::endl;
   
   	int a{10};
	int b{23};
	double c{34.7};
	double d{23.4};
	std::string e{"hello"};
	std::string f{"world"};

    //Explicit template arguments
    auto result2 = maximum(a,b);
    auto max = maximum<double>(a,c);
    std::cout << "max : " << max << std::endl;

    double t {23.5};
    double u {51.2};

    std::cout << "Out - &t: " << &t << std::endl; // 0x111abc
    auto result = minimum(t,u);
    std::cout << "Out - &t: " << &t << std::endl; // 0x111abc

    return 0;

}


//Definition
template <typename T> const T& minimum(const T& a, const T& b){
    std::cout << "In - &a: " << &a << std::endl; // // 0x111abc
    return (a > b ) ? a : b ;
}
