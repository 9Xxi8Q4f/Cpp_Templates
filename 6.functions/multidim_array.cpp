#include <iostream>

double sum(const double array[][3], size_t size);
double sum_3d(const double array[][3][2],  size_t size);

int main(){

    double weights[][3] {
        {10.5, 34.3, 4.8},
        {6.5, 3.2, 7.8},
        {9.5, 2.3, 8.8},
        {10.5, 34.3, 4.8}
    };

    double weights_3d[][3][2] {

        {{10.5, 34.3}, 
        {4.8, 6.5}, 
        {7.8, 9.5}},

        {{10.5, 34.3}, 
        {4.8, 6.5}, 
        {7.8, 9.5}},

        {{10.5, 34.3}, 
        {4.8, 6.5}, 
        {7.8, 9.5}},

        {{10.5, 34.3}, 
        {4.8, 6.5}, 
        {7.8, 9.5}}
    };

    std::cout << "sizeof(weights) : " << sizeof(weights) << std::endl;
    std::cout <<"size(weights): " << std::size(weights) << std::endl;
    double result = sum(weights, std::size(weights));
    std::cout <<"2D array result : " << result << std::endl;

    result = sum_3d(weights_3d, std::size(weights_3d));
    std::cout <<"3D array result : " << result << std::endl;

}

double sum(const double array[][3], size_t size){

    double score_sum{};
    for(size_t i{}; i < size ; ++i){ // size = 4
        for(size_t j{}; j < 3 ; ++j){
            score_sum += array[i][j];
        }
    }
    return score_sum;
}

double sum_3d(const double array[][3][2],  size_t size){
     double score_sum{};

     for(size_t i{}; i< size; i++){
        for(size_t j{}; j<3; j++){
            for(size_t k{}; k<2; k++){
                score_sum += array[i][j][k];
            }
        }
     }

    return score_sum;     
}