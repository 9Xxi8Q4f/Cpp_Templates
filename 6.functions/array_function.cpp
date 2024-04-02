#include <iostream>
// #include <array> //????

double sum(double* scores, size_t count){

    double score_sum{};
    for(size_t i{}; i < count ; ++i){
        score_sum += scores[i];
    }
    return score_sum;
}

//* Sized-array function

// double sum(double scores[], size_t count){
//     double sum = 0;

//     for(size_t i{}; i < count ; ++i){
//         sum += scores[i];
//     }
//     return sum;
// }

//Declaration
double sum_ref( const double (&scores) [10]); //* array by reference

int main(){
    double my_scores[]{10.5,34.3,4.8,6.5};
    //std::cout << "sizeof(my_scores) : " << sizeof(my_scores) << std::endl;
   

   double result = sum(my_scores,std::size(my_scores));
   std::cout << "result : " << result << std::endl;
 
    return 0;
}

double sum_ref( const double (&scores) [10]){

    double score_sum{};
    for(size_t i{}; i < std::size(scores) ; ++i){
        score_sum += scores[i];
    }
    return score_sum;
}