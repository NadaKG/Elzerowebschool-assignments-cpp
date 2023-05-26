#include <iostream>
using namespace std;

int main()
{
    int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};
    int nSize = size(nums);

    for(int i = 0; i < nSize; i++)
    {
        if(nums[i+1] == nums[i] + nums[i])
        {
          cout << nums[i] << "\n";
        }
    }
}