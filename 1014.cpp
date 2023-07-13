#include<iostream>
#include<iomanip>

int main(){
    int distancia;
    float combustivelGasto;
    std::cin>>distancia>>combustivelGasto;
    std::cout<<std::fixed<<std::setprecision(3);
    std::cout<<distancia/combustivelGasto<<" km/l"<<std::endl;
    return 0;
}