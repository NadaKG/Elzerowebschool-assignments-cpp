#include <iostream>
using namespace std;

int main()
{
// Add Type Alias Here
typedef long long int lli;
// Do Not Edit
lli num = 150050005; // This Is Long Long Int
cout << num << "\n"; // 150050005
// Second way
using bigNum = long long int;
bigNum num2 = 10101010;
cout << num2 << "\n";
}