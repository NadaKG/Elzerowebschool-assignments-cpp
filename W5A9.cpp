#include <iostream>
using namespace std;

int main()
{
  int day;
  cin >> day;
cout << (day == 1 || day == 2 || day == 3 ? "Shop Is Open": (day == 4 || day == 5 ? "Shop Is Closed " : "Day Is Not Valid"));

  return 0;
}
