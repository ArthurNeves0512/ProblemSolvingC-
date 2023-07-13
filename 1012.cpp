#include<iostream>
#include<math.h>
#include<iomanip>
#define pi 3.14159
int main(){
    float a,b,c;
    std::cin>>a>>b>>c;
    std::cout<<std::fixed<<std::setprecision(3);
    std::cout<<"TRIANGULO: "<<(a*c)/2<<std::endl;
    std::cout<<"CIRCULO: "<<pi*pow(c,2)<<std::endl;
    std::cout<<"TRAPEZIO: "<<(a+b)*c/2<<std::endl;
    std::cout<<"QUADRADO: "<<b*b<<std::endl;
    std::cout<<"RETANGULO: "<<a*b<<std::endl;
    return 0;
}