#include <iostream>
#include <string>
using namespace std;

string numsecreto (int num){
    int numsecreto = 5;
    string respuesta;
    if (num>numsecreto){
    cout<<"El número es mayor"<<endl;

    }
    else if (num<numsecreto){
          cout<<"El número es menor"<<endl;
        
    }
    else {
            cout<<"¡felicidades!"<<endl;
    }
}

int main(){
    int num, p, j=0;
    string respuesta;

        do{
    cout<<"BIENVENIDO AL NÚMERO MÁGICO, INGRESE UN NÚMERO Y VEAMOS SI COINCIDE CON EL NÚMERO MÁGICO"<<endl;
    cin>>num;

    while (num<=0 | num>100)
    {
    cout<<"BIENVENIDO AL NÚMERO MÁGICO, INGRESE UN NÚMERO Y VEAMOS SI COINCIDE CON EL NÚMERO MÁGICO"<<endl;
    cout<<"ingrese un número dentro del rango"<<endl;
    cin>>num;
    }

    numsecreto(num);
    if(num!=5){
    cout<<"Presione cualquier número excepto 6 para continuar"<<endl;
    cin>>p;
    }
    else
    {
        cout<<"El juego ha finalizado, has ganado"<<endl;
    }
     j++;
    }while (num!=5 & p!=6 & j<5);
    
    return 0;
}