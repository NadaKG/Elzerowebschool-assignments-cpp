#include <iostream>
#include <array>
using namespace std;

int main()
{
    int vals[] = {100, 300, 600, 200, 100};
    if(vals[0] == vals[size(vals) - 1] && vals[1] == vals[size(vals) - 2]){
        cout <<"Array Is Palindrome";
    }
    else {
        cout << "Array Is Not Palindrome";
    }

}