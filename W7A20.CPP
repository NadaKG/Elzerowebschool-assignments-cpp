#include <iostream>
using namespace std;

int main()
{
    string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
    int nsize = size(names);
    

    for(int i = 0; i < nsize; i++ )
    {
        for(int j = 0; j < 1; j++)
        {
            if(size(names[i]) == 5)
            {
                cout << names[i] << "\n";
            }

        }        
    }
}