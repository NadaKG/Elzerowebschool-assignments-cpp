#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i <= 10; i ++)
    cout << i << " ";

    cout <<"\n========================\n";

    int j = 0;
    while (j <= 10)
    {
    cout << j << " ";
    j++;
    }

    cout <<"\n========================\n";

    int n = 0;
    do{
        cout << n <<" ";
        n++;
    } while(n <= 10);
}