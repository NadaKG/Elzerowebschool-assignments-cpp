#include <iostream>
using namespace std;

int main()
{
    int nums[] = {100, 200, 300, 400, 500, 600};
    int size = sizeof(nums) / sizeof(nums[0]);
/*
My solutin
    for(int i = 0; i < size ; i++)
    {
        if( i % 2 == 0)
         {
            cout << nums[i] << "\n";
         }   
    }   */




    // Elzero solution (easier)
    /*for(int i = 0; i < size ; i++)
    {
        cout << nums[i] <<"\n";
        i++;
    } */





    for(int i = 5; i > 1 ; i--) // or int i = size - 1; (more dynamic)
    {
        cout << nums[i] << "\n" ;
        
    }


    int i = size - 1;

    for(;;)
    {
        cout << nums[i] << "\n";
        i--;
        if( i == 1) {
            break;
        }
    }
}