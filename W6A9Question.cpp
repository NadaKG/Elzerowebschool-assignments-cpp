#include <iostream>
#include <array>
using namespace std;

int main()
{
    array <int , 6> nums = {10, 20, 30, 40, 20, 50};
    int num []{10,20,30,40,20,50};

// Method 1
//6
cout << nums.size() << "\n";
// Method 2
//6
cout << sizeof(nums) / sizeof(nums[0]) << "\n";
// Method 3
//6
cout << end(num) - begin(num) ;
}