#include <iostream>
using namespace std;

int main()
{
    int i = 30 ;

    for (; i >= 3; i -= 3)
    {
        cout << i << "\n";
    }

    cout << "=================\n";

     for (i = 30; i >= 3; i -= 3)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else{
            cout << i << "\n";
        }
    }
}