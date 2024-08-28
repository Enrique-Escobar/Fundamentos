#include <iostream>

using namespace std;

int main()
{
    int contador=1, acumulador=0, n;
    
    do {
       cout<<"Ingresar el numero de elementos a sumar: ";
    cin>>n; 
    } while ((0>=n)||(n>50));
    while (contador <= n) {
        acumulador = acumulador + contador;
        contador = contador +1;
    }
    cout<<"La suma de los "<<n<<" primeros numeros es: "<<acumulador;

    return 0;
}