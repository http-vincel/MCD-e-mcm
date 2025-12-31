#include <iostream>
#include <vector>
#include <string>


#include "mcd.hpp"
#include "mcm.hpp"






using namespace std;

int main(int argc, char* argv[])
{
    
    int scelta;
    cout<<"Cosa vuoi fare? mcm[1] or mcd[2]: " << endl;
    cin>>scelta;

    
    
    
    
    switch (scelta)
    {
    case 1:
        {
            cout<<"=========================================" << endl;
            cout<<"         Trova il valore di m.c.m        " << endl;
            cout<<"=========================================" << endl;
        
            int z;
            cout<<"Quanti numeri vuoi inserire? " << endl;
            cin>>z;
        
            vector<int> numeri_z(z);
        
            for (int i = 0; i < z; i++)
            {
                cout<<"Inserisci un numero: " << endl;
                cin>>numeri_z[i];
            }
        
            int risultato_z = numeri_z[0];
        
            for (int i = 1; i < z; i++)
            {
                risultato_z = mcm(risultato_z, numeri_z[i]);
            }
        
            cout<<"Il risultato del mcm dei numeri inseriti e': " << risultato_z << endl;
            break;
        }
   
        
        
        
        
    case 2:
        {
            cout<<"=========================================" << endl;
            cout<<"         Trova il valore di M.C.D        " << endl;
            cout<<"=========================================" << endl;
        
            int n;
            cout<<"Quanti numeri vuoi inserire? " << endl;
            cin>>n;
        
            vector<int> numeri(n);
        
            for (int i = 0; i < n; i++)
            {
                cout<<"Inserisci un numero: " << endl;
                cin>>numeri[i];
            }
        
            int risultato = numeri[0];
        
            for (int i = 1; i < n; i++)
            {
                risultato = mcd(risultato, numeri[i]);
            }
        
            cout<<"Il risultato del MCD dei numeri inseriti e': " << risultato << endl;
            break;
        }
    }
    
    
    
    return 0;
}
