#include <iostream>

// Tools
const int Pen{ 10 }; 
const int Marker{ 20 };
const int Eraser{ 30 };
const int Rectangle{ 40 };
const int Circle{ 50 };
const int Ellipse{ 60 };

//* if statements

void if_statements() {
    

	int number1 {75};
    int number2 {60};
    bool result = (number1 < number2);//Expression yielding the condition
    
    /*
	
	std::cout << std::boolalpha << "result : " << result << std::endl; 
	
	std::cout << std::endl;
	std::cout << "free standing if statement" << std::endl;
   
    //if(result){
	if(result == true){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    
    //if(!result){
	if(!(result == true)){
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    */


   	//Using else
    /*
	std::cout << std::endl;
	std::cout << "using the else clause : " << std::endl;
	
	if(result == true){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }else{
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }
    */


	//Use expression as condition directly
    /*
	std::cout << std::endl;
	std::cout << "Using expression as condition : " << std::endl;
	
	if(number1 < number2){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }else{
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }
    */


	//Nesting if statements
	std::cout << std::endl;
	std::cout << "Nesting if statements" << std::endl;
	
    bool red = false;
    bool green {true};
    bool yellow {false};
    bool police_stop{true};
    
    /*
     *      If green : go
     *      If red, yellow : stop
     *      If green and police_stop : stop
     * */
     /*
     if(red){
         std::cout << "Stop" << std::endl;
     }
     if(yellow){
         std::cout << "Slow down" << std::endl;
     }
	 if(green){
		 std::cout << "Go" << std::endl;
	 }
     */

    /*
    std::cout << std::endl;
	 std::cout << "Police officer stops(verbose)" << std::endl;
	 if(green){
         if(police_stop){
             std::cout << "Stop" << std::endl;
         }
         else{
             std::cout << "Go" << std::endl;
         }

     }
     */


     std::cout << std::endl;
	 std::cout << "Police officer stops(less verbose)" << std::endl;
	 if(green && !police_stop){
         std::cout << "Go" << std::endl;
     }else{
         std::cout << "Stop" << std::endl;
     }


}

void else_if() {
    
    int tool {Eraser};

    if (tool == Pen) {
        std::cout << "Active tool is pen" << std::endl;
        //Do the actual painting
    }
    else if (tool == Marker) {
        std::cout << "Active tool is Marker" << std::endl;
    }
    else if (tool == Eraser) {
        std::cout << "Active tool is Eraser" << std::endl;
    }
    else if (tool == Rectangle) {
        std::cout << "Active tool is Rectangle" << std::endl;
    }
    else if (tool == Circle) {
        std::cout << "Active tool is Circle" << std::endl;
    }
    else if (tool == Ellipse) {
        std::cout << "Active tool is Ellipse" << std::endl;
    }

    std::cout << "Moving on" << std::endl;

    return;
}

void switch_case() {
    
    int tool {Eraser};

    switch (tool)
    {
        case Pen : {
             std::cout << "Active tool is Pen" << std::endl;
        }
        break;

        case Marker : {
             std::cout << "Active tool is Marker" << std::endl;
        }
        break;


        case Eraser :
        case Rectangle : 
        case Circle : {
             std::cout << "Drawing Shapes" << std::endl;
        }
        break;

        case Ellipse : {
             std::cout << "Active tool is Ellipse" << std::endl;
        }
        break;
    
        default: {
            std::cout << "No match found" << std::endl;
        }
            break;
    }

    std::cout << "Moving on" << std::endl;


    /*
    // Condition can only be integer of enum (We'll learn about enums later in the course)
    std::string name {"John"};
    switch (name) // Compiler error!
    {
    
    }
    */


    return;
}

void ternary() {
    
    int max{};
    
    int a{35};
    int b{200};
	
    std::cout << std::endl;
	std::cout << "using regular if " << std::endl;
	
    /*
    if(a >  b){
        max = a;
    }else{
        max = b;
    }
    */

    max = (a > b)? a : b; // Ternary operator
	
    std::cout << "max : " << max << std::endl;

    return;
}

void for_loop() {
    
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;
    }

    //! std::cout << i << std::endl; //ERROR : i is not defined
    //* To reach i, identify i as a variable outside the loop
  //Use size_t : a representation of some unsigned int for positive numbers [sizes]
  /*
  for(size_t i{0} ; i < 10 ; ++i){
      std::cout << i << " : I love C++" << std::endl;
  }*/

   //*Iterator declared outside the loop
   /*
    size_t i{0}; // Iterator defined outside

    for(i ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "i : " << i << std::endl;
    */


    //*Leave out the iterator declaration part
    /*
    size_t i{0}; // Iterator defined outside

    for(  ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "i : " << i << std::endl;
    */
    return;
}

void for_multiple_declarations() {

    for (size_t i{0} , x {5}, y{22} ; y > 15 && x <15; ++i , x+=5 , y-=1){
    std::cout << "i: " << i << ", x : " << x << ", y : " << y << std::endl;

    }}

void for_range_value() {
    int bag_of_values [] {1,2,3,4,5,6,7,8,9,10}; // This is a collection of integers
    // The variable value will be assigned a value from the values array on each iteration
	
    /*
    for(size_t i {0} ; i < 10 ; ++i){
        std::cout << "value : " << bag_of_values[i] << std::endl;
    }
    */
	

    /*
    for (int value : bag_of_values){
        //value holds a copy of the current iteration in the whole bag
        std::cout << " value : " << value << std::endl;
    }
    */


   //Specify the collection in place
   /*
    for (int value : {1,2,3,4,5,6,7,8,9,10}){
        //value holds a copy of the current iteration in the whole bag
        std::cout << " value : " << value << std::endl;
    }
    */

   //Auto type deduction
	for (auto value : {1,2,3,4,5,6,7,8,9,10}){
        //value holds a copy of the current iteration in the whole bag
        std::cout << " value : " << value << std::endl;
    }
   
    return;
}

void while_loop() {

    int i {0};
    while(i < 10){
        std::cout << i << std::endl;
        ++i;
    }

    // const size_t COUNT{100};
    // size_t i{0}; // Iterator declaration

    // while(i < COUNT ){ // Test
    //    std::cout << i << " : I love C++" << std::endl;

    //    ++i; // Incrementation 
    // }
    // std::cout << "Loop done!" << std::endl;

    return;
}

void do_while_loop() {

    const int COUNT{0};
    size_t i{0}; // Iterator declaration

    do{
        std::cout << i << " : I love C++" << std::endl;
        ++i; // Incrementation
    }while( i < COUNT);

    std::cout << "Loop done!" << std::endl;
    
    return;

}


int main() {

    //* For Loop with initialization condition and incrementation
    for(double multiplier{4}; auto i : {1,2,3,4,5,6,7,8,9,10}){
        std::cout << "result : " << ( i * multiplier) << std::endl;
    }

    int array[] {1,2,3,4,5,6,7,8,9,10};
    double plus_ten {10.57};

    for(plus_ten; auto value : array){
        std::cout << "result : " << value+plus_ten << std::endl;
    }

    for(auto value : array){
        std::cout << "result : " << value << std::endl;
    }

    return 0;
}
