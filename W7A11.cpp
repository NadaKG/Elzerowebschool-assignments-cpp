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

    // other solution
    for (int i = 0; i < size(friends); i++)
{
            
    for (int j = 0; j < 1; j++)
    {
        cout << "\n" << "==========" << "\n";
        cout << "= "<< friends[i] << " =" << "\n"; 
    }
    cout << "=====================";
    cout << "\n";
    cout <<"== ";
    for (int m = 0; m < size(friends[i]); m++)
    {
        cout << friends[i][m];
        if (m != (friends[i].length() - 1)) cout << " ,"; 
    }
    cout <<" =";
    cout << "\n";
    cout << "=====================" << "\n";
}
}
