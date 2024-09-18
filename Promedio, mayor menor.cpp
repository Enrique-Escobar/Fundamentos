#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int suma=0, numero, N;
    int mayor = numeric_limits<int>::min();
    int menor = numeric_limits<int>::max();
    do{
        cout<<"Ingresa el numero de elementos: ";
        cin>> N;
    }while (N <= 0);
    for (int i=0;i<N;i++)
    {
        cout<<"Ingrese un numero: "<<i<<" : ";
        cin>>numero;
        suma=suma+numero;
        if (numero>mayor)
            mayor=numero;
        if (numero<menor)
            menor=numero;
        
    }
    cout<<"El numero promedio es: "<< static_cast<double>(suma)/N<<endl;
    cout<<"El mayor es: "<<mayor<<endl;
    cout<<"El menor es: "<<menor<<endl;
    return 0;
}