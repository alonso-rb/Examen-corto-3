#include <iostream>
using namespace std;

int prueba1(int year){
    int modyear=year%4000, mod4=year%4, mod100=year%100;
    if (modyear==0){
    cout<<"El año es bisiesto"<<endl;
    }
    else if (mod4==0 & mod100!=100){
        cout<<"El año es bisiesto"<<endl;
    }
    else{
        cout<<"El año no es bisiesto"<<endl;
    }
    return 0;
}

int main(){
    int year;
    cout<<"Ingrese un año"<<endl;
    cin>>year;
    prueba1(year);
    return 0;
}