#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cstdlib>
using namespace std; 

int main(void)
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    float const pi=3.14;
    float p, d, r, a;

    cout<<"Qual o perímetro ? \n";
    cin >>p;

    d=p/pi;

    r=d/2;

    a=r*r;
    cout <<"\n";
    cout <<"\nO perimetro é: "<< p; 
    cout <<"\nO diametro é: "<< d; 
    cout <<"\nO raio é: "<< r; 
    cout <<"\nA area é: "<< a; 
    system("pause");
}
