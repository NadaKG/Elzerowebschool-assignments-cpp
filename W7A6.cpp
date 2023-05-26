#include <iostream>
using namespace std;

int main()
{
    for(int i = 10; i <= 100000000; i *= i)
    {
        cout << i <<"\n";
    }
    cout <<"===============\n";

    int j = 10;
    while (j  <= 100000000)
    {
        cout << j <<"\n";
        j *= j;
    }
}