#include<iostream>
#include<iomanip>
#include<string.h>

int main(){
    std::string nome;
    double salary,sells;
    std::cin>>nome>>salary>>sells;
    std::cout<<std::fixed<<std::setprecision(2);
    std::cout<<"TOTAL = R$ "<<salary+0.15*sells<<std::endl;
    return 0;
}