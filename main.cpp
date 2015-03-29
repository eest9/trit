#include <iostream>
#include "ternary.h"

using namespace std;

int main()
{
    short byte=0;
    short tryte[11];
    do{
      cout << "Eingabe:     ";
      cin >> byte;
      if(!cin.fail()) {
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
      }else{
        if(cin.eof()) {
          cout << endl;
          return 0;
        }
        cout << "Eingabe endgültig" << endl;
        return -1;
      }
    }while(byte!=0);
    return 0;
}
