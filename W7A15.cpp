#include <iostream>
using namespace std;

int main()
{
    int help_num = 4;
    int nums[] = {2, 4, 5, 6, 10};
    int nsize = size(nums);

    for(int i = 0; i <= nsize ; i++)
    {
        for(help_num; help_num >= 0; help_num--)
        {
            cout << nums[i] << " + " << nums[help_num] <<" = "<< nums[i] + nums[help_num] <<"\n";
            i++;   
        }
    }
}