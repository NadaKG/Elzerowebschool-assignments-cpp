#include <iostream>
using namespace std;

int main()
{
   for(int i = 1; i <= 102; i++)
   {
     if (i == 21)
     i = 100;

     if (i < 10)
     cout <<"00";

     if (i > 9 && i < 100)
     cout << "0";

     cout << i <<"\n";
   }
   
}