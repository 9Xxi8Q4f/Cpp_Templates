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

//*  using constructors
class Cylinder2 {
    
};


int main(){
    Cylinder cylinder1; // Objects
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    //Change the member variables
    cylinder1.radius = 10;
    cylinder1.height = 3;

    std::cout << "volume : " << cylinder1.volume() << std::endl;

    cylinder1.height =8;

    std::cout << "volume : " << cylinder1.volume() << std::endl;
   
    return 0;
}