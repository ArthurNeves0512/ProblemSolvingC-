#include<iostream>
#include<cmath>
#include<iomanip>
int main(){
    float dinheiro;
    std::cin>>dinheiro;
    float notas[12][2];
    float *pointer= *notas;
    notas[0][0]=100;
    notas[1][0]=50;
    notas[2][0]=20;
    notas[3][0]=10;
    notas[4][0]=5;
    notas[5][0]=2;
    notas[6][0]=1;
    notas[7][0]=0.50;
    notas[8][0]=0.25;
    notas[9][0]=0.10;
    notas[10][0]=0.05;
    notas[11][0]=0.01;
    
    for(int i=0;i<12;i++){        
        float sobrou = dinheiro-(*pointer);
        if(dinheiro>=0){
            *(pointer+1) = int(dinheiro / *pointer);
            int vezes = *(pointer+1);
            dinheiro=round((dinheiro -( *pointer *vezes))*100)/100;
            
        }
        else{
            *(pointer+1) =0;
        }
        pointer+=2;
        
    }
    int flag =6;
    std::cout<<std::fixed<<std::setprecision(2)<<"NOTAS:"<<std::endl;
    pointer = *notas;
    while (flag--)
    {   
        std::cout<<int(*(pointer+1))<<" nota(s) de R$ "<<*pointer<<std::endl;
        pointer+=2;
    }
    flag =6;
    std::cout<<"MOEDAS:"<<std::endl;
    while (flag--)
    {   
        std::cout<<int(*(pointer+1))<<" moeda(s) de R$ "<<*pointer<<std::endl;
        pointer+=2;
    }
    return 0;
}