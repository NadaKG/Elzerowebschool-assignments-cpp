#include <iostream>
using namespace std;

int main()
{
    // Friends Array
string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
int aSize = sizeof(friends) / sizeof(friends[0]);
// for loop
for(int i = 0; i < aSize; i++)
{
    for(int j = 0; j < 1; j++)
    {
        if(friends[i][j] == 65)
        {
            cout << friends[i] << "\n";
        }
    }
}

 //while loop
int i = 0;
while (i < size(friends))
{
    if (friends[i][0] == 65)
        {
            cout << friends[i] << "\n";
        }
    i++;
}
}
