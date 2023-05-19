#include <array>
#include <iostream>
using namespace std;

int main()
{
  array<int, 6> nums = {10, 20, 30, 40, 20, 50};

  // Method 1
 cout << nums[0] <<"\n";
 cout << *(nums.end() -1) <<"\n";

 //Method 2
 cout << *begin(nums) << "\n";
 cout << *(end(nums)-1) <<"\n";

 //Method 3
cout << *nums.begin() <<"\n";
cout << nums[(size(nums)-1)] <<"\n";

//Method 4
cout << nums.front() << "\n";
cout << nums.back() <<"\n"; 
  return 0;
}
