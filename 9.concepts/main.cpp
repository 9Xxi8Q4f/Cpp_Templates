#include <iostream>
using namespace std;
#include <concepts>

//Syntax1

template <typename T>
requires std::integral<T>
T add( T a, T b){
    return a + b;
}

//Syntax2
/*
template <std::integral T>
T add( T a, T b){
    return a + b;
}
*/


//Syntax3
/*
auto add(std::integral auto a , std::integral auto b){
    return a + b;
}
*/


//Syntax4
/*
template <typename T>
T add( T a, T b) requires std::integral<T>{
    return a + b;
}
*/

void build_own_concept(){}
void require_clause(){}

int main(){
    char a_0{10};
	char a_1{20};
	
	auto result_a = add(a_0,a_1);
	std::cout << "result_a : " << static_cast<int>(result_a) << std::endl;
	
	int b_0{11};
	int b_1{5};
	auto result_b = add(b_0,b_1);
	std::cout << "result_b : " << result_b << std::endl;


	double c_0 {11.1};
	double c_1 {1.9};
	auto result_c = add(c_0,c_1); // Error: srd::integral is not satisfied
    std::cout << "result_c : " << result_c << std::endl;
 
  
    return 0;
}

void build_own_concept(){

    //Syntax1

    template <typename T>
    concept MyIntegral = std::is_integral_v<T>;

    MyIntegral auto add( MyIntegral auto a, MyIntegral auto b) {
        return a + b;
    }

    template <typename T>
    concept Multipliable =  requires(T a, T b) {
        a * b; // Just makes sure the syntax is valid
    };


    template <typename T>
    concept Incrementable = requires (T a) {
        a+=1;
        ++a;
        a++;
    };

    template <typename T>
    requires Incrementable<T>
    T add (T a, T b){
        return a + b;
    }

}

void require_clause(){

    template <typename T>
    concept TinyType = requires (T t){
        sizeof(T) <= 4; // Simple requirement : Only enforces syntax
        requires sizeof(T) <= 4; //! Nested requirements
    };

    //Compound requirement
    template <typename T>
    concept Addable = requires (T a, T b) {
        //noexcept is optional
        {a + b} -> std::convertible_to<int>; //! Compound requirement
        //Checks if a + b is valid syntax, doesn't throw expetions(optional) , and the result
        //is convertible to int(optional)
    };

}

void combine_concepts()
{
    template <typename T>
    concept TinyType = requires ( T t){
        sizeof(T) <=4; // Simple requirement
        requires sizeof(T) <= 4; // Nested requirement
    };


    template <typename T>
    //requires std::integral<T> || std::floating_point<T> // OR operator
    //requires std::integral<T> && TinyType<T>
    requires std::integral<T> && requires ( T t){
        sizeof(T) <=4; // Simple requirement
        requires sizeof(T) <= 4; // Nested requirement
    }
    T add(T a, T b){
        return a + b;
    }

    long long int x{7};
    long long int y{5};

    add(x,y);


}

/*
//This syntax constrains the auto parameters you pass in 
//to comply with the std::integral concept
std::integral auto add (std::integral auto a,std::integral auto b){
	return a + b;
}


int main(){

    std::floating_point auto x = add(5,8);
  
    return 0;
}
*/