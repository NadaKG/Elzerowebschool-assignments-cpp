#include <iostream>
using namespace std;

int main()
{
    for(int i = 2; i <= 126; i = ((i+i)+2))
    {
        cout << i <<"\n";
    }
    cout <<"===============\n";

    int j = 2;
    while (j  <= 126)
    {
        cout << j <<"\n";
        j = ((j+j)+2);
    }
}