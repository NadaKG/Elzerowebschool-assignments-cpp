#include <iostream>
using namespace std;

int main()
{
    for(int i = 2; i <= 128; i += i)
    {
        cout << i <<"\n";
    }
    cout <<"===============\n";

    int j = 2;
    while (j  <= 128)
    {
        cout << j <<"\n";
        j += j;
    }
}