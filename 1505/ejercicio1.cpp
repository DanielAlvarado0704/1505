#include <iostream>
using namespace std;
int main()
{
    float angulo1, angulo2, angulo3 =0.00;
    float suma=0;

    cout<<"escribir angulo1: ";
    cin>>angulo1;
    cout<<"escribir angulo2: ";
    cin>>angulo2;
    suma=angulo1+angulo2;
    angulo3= 180-suma;
    cout<<"resultado del tercer angulo: "<<angulo3;

    


    return 0;
}