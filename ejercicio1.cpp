#include <iostream>
using namespace std;


double saltotales(int horastotales, int horasextras){
    double horatotal, horaextra, salario;
    horatotal=horastotales*1.75;
    horaextra=horasextras*2.00;
    salario=horaextra+horatotal;
    return salario;
}
double descuentos(double saltotal){
    double descuento, salnormal;
    if (saltotal<=500){
    descuento=(saltotal*0.04)+(saltotal*0.0625);
}
    else {
        descuento=(saltotal*0.04)+(saltotal*0.0625)+(saltotal*0.10);
    }
    return descuento;
    }

int main(){
    int n, j=0, horastotales, horasextras, i;
    double saltotal, salnormal;
    cout<<"Ingrese la cantidad de empleados de la empresa"<<endl;
    cin>>n;
    while (n<=0){
        cout<<"Ingrese datos apropiados, por favor"<<endl;
        cin>>n;
        n++;
    }
    for (int i = 1; i <= n; i++)
    {
       cout<<"Ingrese la horas trabajadas por el empleado "<<i<<endl;
        cin>>horastotales;
        while(horastotales<=0){
        cout<<"Ingrese la horas trabajadas por el empleado, que no sean dígitos negativos"<<endl;
        cin>>horastotales;
        horastotales++;
        }
        cout<<"Si el empleado posee horas extras favor agregarlas, de lo contrario, colocar 0"<<endl;
        cin>>horasextras;
        while(horasextras<0){
        cout<<"Si el empleado posee horas extras favor agregarlas, de lo contrario, colocar 0"<<endl;
        cin>>horasextras;
        horasextras++;
        }
        saltotal=saltotales(horastotales, horasextras);
        salnormal=saltotal-descuentos(saltotal);
        cout<<"Para el empleado "<<i<<endl;
        cout<<"El salario total es de $ "<< saltotal << " y el salario normal es de $ "<<salnormal<<endl;
    }
    
        
    
    
    return 0;
}