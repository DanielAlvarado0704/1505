#include <iostream>
using namespace std;
int main()
{
    float nota = 0;
    float promedio = 0;
    string nombre;
    float nota_corto1= 0;
    float nota_corto2= 0;
   float nota_parcial1= 0;
    float nota_parcial2= 0;
    float nota_lab= 0;
    float nota_proyecto= 0;  

   

    cout << "ingresar nombre:";
    cin >> nombre;

    cout << "ingresar nota de corto 1:";
    cin >> nota_corto1;

    cout << "ingresar nota de corto 2:";
    cin >> nota_corto2;

    cout << "ingresar nota de parcial 1:";
    cin >> nota_parcial1;

    cout << "ingresar nota de parcial 2:";
    cin >> nota_parcial2;

    cout << "ingresar nota de lab:";
    cin >> nota_lab;

    cout << "ingresar nota de proyecto:";
    cin >> nota_proyecto;


    nota = (0.1 * nota_corto1) + (0.1 * nota_corto2) + (0.15 * nota_parcial1) + (0.2 * nota_parcial2) + (0.2 * nota_lab) + (0.25 * nota_proyecto);

    cout<<"su nota es:"<<nota;
    

    if (nota >= 6.0)
    {
        cout << "su nombre es: " << nombre << "y su promedio es: " << nota;
        cout << "aprobado";
    }
    else

    {
        cout << "no aprobado: ";
    }

    return 0;
}
