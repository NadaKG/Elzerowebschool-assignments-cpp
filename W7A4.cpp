#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 19; i += 2)
    {
        if(i == 10 || i == 12)
        continue;
        cout << i <<"\n";
    }
    cout <<"===============\n";

    int j = 0;
    while (j  < 19)
    {
       if(j == 10 || j == 12)
       {
        j+=2;
        continue;
       }
       cout << j <<"\n";
       j+=2;
    }
}
