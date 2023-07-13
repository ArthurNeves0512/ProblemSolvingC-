#include<iostream>
#include<iomanip>

int main(){
    int codigo,num;
    double valor,total=0;
    for(int i=0;i<2;i++){
        std::cin>>codigo>>num>>valor;
        total+=num*valor;
    }
    std::cout<<std::fixed<<std::setprecision(2);
    std::cout<<"VALOR A PAGAR: R$ "<<total<<std::endl;
    return 0;
}