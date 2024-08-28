#include <iostream>
#include "math.h"
using namespace std;
int main () {
float C, I, T, A; 

cout<<"Ingrese su capital: ";
cin>>C;
if (C>0){
 cout<<"Ingrese el porcentaje de su tasa de interes anual de su capital: ";
 cin>>T;
 if (T>0){
 T=T/100;
 cout<<"Ingrese los años transcurridos desde el deposito inicial de su capital: ";
 cin>>A;
 if (A>0){
 I=C*pow((1+T),A);
 cout<<"Su capital será de: "<<I;
 }
 else
 cout<<"Cantidad de años no valida";
 }
 else
 cout<<"Tasa de interés anual no valida";
}
else
cout<<"Capital no valido";
return 0;
}
