#include <iostream>
using namespace std;
int main(){
 float i,c,n,t;
 cout<<"ingrese su capital: "; cin>>c;
 cout<<"ingrese la tasa de interes: "; cin>>t;
 cout<<"ingrese los años: "; cin>>n;
 t=t/100;
 i=c*t*n;
 cout<<"su interes simple es de: "<<i<<"bs";
 return 0;
}