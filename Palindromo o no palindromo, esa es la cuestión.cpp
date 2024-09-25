#include <iostream>
#include <string>
using namespace std;

int main()
{
    int longitud;//Debe ser entera para que pueda utilizar el ciclo repetitivo
    string palabra;
    bool espalindromo=true; // Por defecto las palabras no son palindromos
    cout<<"Ingrese una palabra: ";
    getline(cin,palabra); //Pedir un valor del teclado para la variable palabra
    longitud = palabra.length();
    for (int i=0;i<longitud;i++)
    {
        if (palabra.at(i)!=palabra.at(longitud-i-1)){
            espalindromo=false;
            break;
        }
    }
    if (espalindromo)
        cout <<"Es palindromo";
        else
        cout<<"No es palindromo";
    return 0;
}