#include <iostream>
using namespace std;

int main()
{
  int num1;
  int num2;
  int i = 0;
  int container;
 

  cout <<"Please Enter Your Two Numbers: \n";
  cin >> num1;
  cin >> num2;

  if(num1 > num2)
  {
    container = num1;
    num1 = num2;
    num2 = container;
  }
  for(i = (num1 +1); i < num2; i++)
  {
    if(i % 2 == 0)
    {
      continue;
    }
    cout << i <<" ";
  }
 
    /*
  Test Case 1
  Number One: 1
  Number Two: 9
  Output: 3, 5, 7

  Test Case 2
  Number One: 2
  Number Two: 15
  Output: 3, 5, 7, 9, 11, 13

  Test Case 3
  Number One: 8
  Number Two: 2
  Output: 3, 5, 7
*/
}