#include <iostream>
using namespace std;

int main()
{
    string friends[] = {"Ahmed", "Osama", "Ameer"};
    int aSize = sizeof(friends) / sizeof(friends[0]);
    
    for(int i = 0; i < aSize; i++)
    {
      cout <<"=========\n";
      cout <<"= " << friends[i] << " =\n";
      cout <<"==================\n" <<"== ";

       for(int j = 0; j < size(friends[i]); j++)
       { 
         cout << friends[i][j];
         if (j != size(friends[i]) - 1)
         {
            cout <<", ";
         }
       }
    cout << " ==";
    cout <<"\n==================\n";
    }
}