#include <iostream>
using namespace std;
int main()
{
    float angulo=0;

    cout<<"ingresar angulo";
    cin>>angulo;
     
     if(angulo<90){
        cout<<"angulo agudo";
     }
     else if(angulo>90){
        cout<<"angulo obtuso";

     }
     if(angulo=90){
        cout<<"angulo recto";
     }


    return 0;
}