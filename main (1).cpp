/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   float x, y, z, s, area;
    cout<< "Ingrese el 1er lado: ";
    cin>> x;
    cout<< "Ingrese el 2do lado: ";
    cin>> y;
    cout<< "Ingrese el 3er lado: ";
    cin>> z;
    s=(x+y+z)/2.0;
    area=sqrt(s*(s-x)*(s-y)*(s-z));
    cout<< "El área del triangulo es: "<<area;
    return 0;
}