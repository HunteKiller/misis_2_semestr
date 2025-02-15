#include <iostream>

void i_plus(int a, int b){
    std::cout << a+b;
}

void minus(int a, int b){
    std::cout << a-b;
}

void mul(int a, int b){
    std::cout << a*b;
}


void div_d(int a, int b){
    if(b != 0){
        std::cout << a/b;
    }
    else{
        std::cout<< "Not Exist";
    }
    
}
