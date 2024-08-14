#include<iostream>
#include<math.h>
#include<iomanip>
#define PI 3.14159

int main(){
    double raio;
    std::cin>>raio;
    std::cout<<std::fixed<<std::setprecision(4)<<"A="<<pow(raio,2)*PI<<std::endl;
    return 0;
}