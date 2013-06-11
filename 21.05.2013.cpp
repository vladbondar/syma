#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int count(int x)
{
   int  integer, sum = 0;
   
   for (int i = 1; i <= x; i++)
   {
      cout << "Vvedite celoye chislo, kotoroye budet summirovat'sya: ";
      cin >> integer;
      sum += integer;
   }
    cout<<sum<<endl;
   getch();
   return sum;
}

int main()
{
   int counter;
   
   cout << "Vvedite celoye chislo, kotoroye ukashet na kol-vo chisel dlya vvoda: ";
   cin >> counter;
   cout << endl;
   cout << endl << "Summa " << counter 
   << " vvedennih chisel ravna: " << count(counter) << endl;
   
   return 0;
}
