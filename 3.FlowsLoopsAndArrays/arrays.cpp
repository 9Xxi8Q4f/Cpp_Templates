#include <iostream>
using namespace std;

void declare_arrays() {
    //Declare an array of ints
   int scores [10]; // Junk data

    //Read data

   std:: cout << " scores [0] : " << scores[0] << std::endl;
   std:: cout << " scores [1] : " << scores[1] << std::endl;
   
    cout<< "--------------------------------"<<endl;

    //Read with a loop
    
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
    
    cout<< "--------------------------------"<<endl;
  
    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    //Print the data out
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }

    cout<< "--------------------------------"<<endl;

   //Write data in a loop
   
   for(size_t i{0}; i < 10 ; ++i){
       scores[i] = i * 10;
   }

    //Print the data out
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
    
    cout<< "--------------------------------"<<endl;


    //*Declare and initialize at the same time
    
	double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};
	
	for(size_t i{0}; i < 5; ++i){
		std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
	}
    
  
    cout<< "--------------------------------"<<endl;

    //If you don't initialize all the elements, those you leave out
    //are initialized to 0
    
    int families[5] {12, 7, 5};
	
	for(size_t i{0}; i < 5; ++i){
		std::cout << "families[" << i << "] : " << families[i] << std::endl;
	}
    
    cout<< "--------------------------------"<<endl;

   	//Omit the size of the array at declaration
   
    int class_sizes[] {10,12,15,11,18,17,23,56}; 
	
	// Will print this with a range based for loop
	for(auto value : class_sizes){
		std::cout << "value : " << value << std::endl;
	}
    
    cout<< "--------------------------------"<<endl;
    
   // Read only arrays
   /*
   const int birds[] {10,12,15,11,18,17,23,56}; 
   birds[2] = 8; // ERROR
   */

    cout<< "--------------------------------"<<endl;

    //Sum up scores array, store result in sum
 
    int scores1[] {2,5,8,2,5,6,9};
    int sum {0};
    
    for( int element : scores1){
        sum += element;
    }
    std::cout << "Score sum : " << sum << std::endl;
  
   return;
}

void size_of_arrays() {
    int scores [] {1,2,5};

   
    int count = sizeof(scores); // std::sizeof(scores);

    std::cout << "sizeof(scores) : " << sizeof(scores) << std::endl;
    std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl;
    std::cout << "count : " << count << std::endl;

    //print length of scores array
    std::cout << "length of scores : " << sizeof(scores) / sizeof(scores[0]) << std::endl;

   //Range based for loop
    for ( auto i : scores){
            std::cout << "value  : " << i << std::endl;       
    }

    return;
}

void arrays_of_char() {

    char name[] {"John"};
    std::cout << "name : " << name << std::endl;
}

int main() {
    size_of_arrays();
    return 0;
}