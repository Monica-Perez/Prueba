#include <iostream>

using namespace std;

int main()
{
    int f=0, m=0, cd=0, x=0;
    cout<< "Ingrese Fecha del año: ";
    cin>> f;
    cout<< "Ingrese Mes del año: ";
    cin>> m;

    if(m==1)
    {
        cd=f;
    }else if(m==2)
    {
        x = 31+28;
        cd= x-(28-f);
    }

    cout<< "La Fecha es el numero: "<<cd<<endl;
    return 0;

}
