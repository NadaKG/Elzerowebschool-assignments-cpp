#include <iostream>
#include <array>
using namespace std;

int main()
{
    int check = 25;
    int nums[]{40, 35, 30, 70, 100};
    int i = (sizeof(nums)/sizeof(int)) - 2;

    if(nums[0] > check )
    {
        cout << "{" << nums[0] <<"} " << "+" <<" {" << nums[i] << "}" << " = " << nums[0] + nums[i] <<"\n"; 
    }
    if(nums[1] > check) 
    {
        cout << "{" << nums[1] <<"} " << "+" <<" {" << nums[i] << "}" << " = " << nums[1] + nums[i] <<"\n"; 
    }
    if(nums[2] > check) 
    {
        cout << "{" << nums[2] <<"} " << "+" <<" {" << nums[i] << "}" << " = " << nums[2] + nums[i]; 
    }
}
