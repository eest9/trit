#include <iostream>
#include "ternary.h"
#include <limits>

using namespace std;

int main()
{
    short byte=0;
    short tryte[11];
  
    do{
      cout << "Eingabe:     ";
      cin >> byte;
      if(cin.fail()) {

       if(cin.eof()) {
        cout << endl;
        return 0;
       }
       cout << "Eingabe ungültig" << endl;
       cin.clear();
       cin.ignore(numeric_limits<streamsize>::max());
      }else{
       cout << "Dezimal:     " << byte << endl;
       var_to_tryte(byte, tryte);
       cout << "Ternär Bal.: ";
       for(char i=0;i<11;i++)
       {
        cout << tryte[i] << " ";
       }
       cout << endl;
       cout << "Ternär Bal.: ";
       for(char i=0;i<11;i++)
       {
        if(tryte[i]==-1)
        {
         cout << "-";
        }
        if(tryte[i]==1)
        {
         cout << "+";
        }
        if(tryte[i]==0)
        {
         cout << "0";
        }
       }
       cout << endl;
       byte++;
      }
    }while(1);
    return 0;
}
