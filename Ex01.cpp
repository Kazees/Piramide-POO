#include <iostream>
#include "Piramide.h"
#include "Piramide.cpp"
#include <stdexcept>
#include <iomanip>

using namespace std;

int main()
{
    float base,altura;
    bool conti=true;

    while(conti)
    {
        cout<<"Digite o valor da base: ";
        cin>>base;

        cout<<"Digite o valor da altura: ";
        cin>>altura;

        try
        {
            Piramide p1(base,altura);
            cout<<fixed<<setprecision(2);
            cout<<"Volume: "<<p1.calcularVolume()<<endl;
            conti=false;
        }

        catch(invalid_argument &e)
        {
            cerr<<"Erro: "<< e.what()<<endl;
            conti=true;
        }
    }
    
    return 0;
}