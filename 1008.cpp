#include<iostream>
#include<iomanip>

int main(){
    int a,b;
    double salary;
    std::cin>>a>>b>>salary;
    std::cout<<"NUMBER = "<<a<<std::endl;
    std::cout<<std::fixed<<std::setprecision(2);
    std::cout<<"SALARY = U$ "<<b*salary<<std::endl;
    return 0;
}