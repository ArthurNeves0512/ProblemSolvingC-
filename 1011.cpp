#include<iostream>
#include<math.h>
#include<iomanip>
#define PI 3.14159

int main(){
    double raio;
    std::cin>>raio;
    std::cout<<std::fixed<<std::setprecision(3);
    std::cout<<"VOLUME = "<<(4.0/3)*PI*pow(raio,3)<<std::endl;
    return 0;
}