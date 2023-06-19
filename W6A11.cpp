#include <array>
#include <iostream>
using namespace std;

int main()
{
  // Do Not Edit The Next 3 Lines
  int index = 1;
  array<int, 3> oldNums = {10, 20, 30};
  array<int, 3> newNums;

  //My Old Solution
  newNums[0] = *(end(oldNums) - index);
  newNums[1] = *(end(oldNums) - (index * 2));
  newNums[2] = *(end(oldNums) - (index *3));

  // Others Solutin
 //newNums.at(index)=oldNums.at(index);
 //newNums.front() = oldNums.back();
 //newNums.back() = oldNums.front();

  //My Updated Solution
  newNums[0] = oldNums.back();
  newNums[1] = oldNums[index];
  newNums[2] = oldNums.front();
  


  // Do Not Edit The Next 3 Lines
  cout << newNums[0] << "\n"; // 30
  cout << newNums[1] << "\n"; // 20
  cout << newNums[2] << "\n"; // 10

  return 0;
}
