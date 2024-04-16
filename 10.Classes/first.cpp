#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder {
    public :
        //Functions
        double volume(){
            return PI * radius * radius * height;
        }

    public : 
        //member variables
        double radius {1.0};
        double height {1.0};
};

/* 
* Using Constructors
* Constructors are used to initialize the member variables of the class
* Constructors are called everytime an object is created
* Constructors have the same name as the class
* Constructors have no return type
* Constructors can be overloaded
*/
class Cylinder2 {

    private:
        double radius {1.0};
        double height {1.0};

    public:
        //* Constructors

        /*
        This one is like init function in Python with default values
        It is called everytime an object is created
        */

        Cylinder2(){
            radius = 2.0;
            height = 2.0;
        }

        /*
        This one is called everytime an object is created
        With parameters
        */
        Cylinder2(double radius_value, double height_value){
            radius = radius_value;
            height = height_value;
            
        }

        double volume(){
            return PI * radius * radius * height;
        }
};

//* Defaulted Constructor
class Cylinder3 {
    private : 
        //Member variables
        double base_radius{1};
        double height{1};

    public :
        //Constructor
        Cylinder3() = default;
        Cylinder3(double r, double h){
            base_radius = r;
            height = h;
        }

        double volume(){
            return PI * base_radius * base_radius * height;
        }
};


//* SETTERS AND GETTERS

class Cylinder4 {
    public:
        //Constructors
        Cylinder4() = default;
        Cylinder4(double r, double h){
            radius = r;
            height = h;
        }

        //Functions
        double volume(){
            return PI * radius * radius * height;
        }

        //Setter and Getter functions
        double get_radius(){
            return radius;
        }

        double get_height(){
            return height;
        }

        void set_radius(double r){
            radius = r;
        }

        void set_height(double h){
            height = h;
        }
    
    private:
        //Member variables
        double radius{1.0};
        double height{1.0};
};
 
int main(){
    /*
    Cylinder cylinder1; // Objects
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    //Change the member variables
    cylinder1.radius = 10;
    cylinder1.height = 3;

    std::cout << "volume : " << cylinder1.volume() << std::endl;

    cylinder1.height =8;

    std::cout << "volume : " << cylinder1.volume() << std::endl;
   */

    std::cout << "------------------------------" << std::endl;

    // Cylinder2 cylinder2 {5.0,10.0};
    Cylinder2 cylinder3;
    std::cout << "volume : " << cylinder3.volume() << std::endl;

    std::cout << "----------SETTER AND GETTER----------" << std::endl;

    Cylinder4 cylinder4 {5.0,10.0};
    std::cout << "volume : " << cylinder4.volume() << std::endl;

    //Modify object
    cylinder4.set_radius(10.0);
    cylinder4.set_height(20.0);

    std::cout << "volume : " << cylinder4.volume() << std::endl;
    
    return 0;
}

