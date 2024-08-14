#include<iostream>

int main(){
int horaInicial,minutoInicial,horaFinal,minutoFinal,horasDuracao,minutosDuracao;
std::cin>>horaInicial>>minutoInicial>>horaFinal>>minutoFinal;
if(horaFinal<horaInicial ||(horaFinal==horaInicial && minutoFinal<=minutoInicial)){
    horasDuracao = 24-horaInicial;
    horasDuracao = (horaFinal+horasDuracao)*60;
}
else{
    horasDuracao=(horaFinal-horaInicial)*60;
}
minutosDuracao = minutoFinal-minutoInicial;
minutosDuracao = horasDuracao+minutosDuracao;
horasDuracao = minutosDuracao/60;
minutosDuracao = minutosDuracao%60;
std::cout<<"O JOGO DUROU "<<horasDuracao<<" HORA(S) E "<<minutosDuracao<<" MINUTO(S)"<<std::endl;
return 0;
}