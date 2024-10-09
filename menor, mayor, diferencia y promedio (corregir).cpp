/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    float numero, promedio, mayor, menor, acum;
    int n;
    do {
        cout<<"Ingresar el numero de elementos: "<<endl;
        cin>>n;
    } while (n <= 0);
    cin>>numero;
    mayor=numero;
    menor=numero;
    acum=numero;
    for (int i=2; i<=n; i++){
         cout<<"Ingrese un numero: "<<endl;
         cin>>numero;
         if (menor > numero)
            menor = numero;
         if (mayor < numero)
            mayor = numero;
            acum=acum + numero;
            cout<<"El menor de los numeros es: "<< menor<<endl;
            cout<<"El mayor de los numeros es: "<< mayor<<endl;
            cout<<"La diferencia es: "<< mayor - menor<<endl;
            cout<<"El promedio es de: "<< promedio;
            
    }

    return 0;
}