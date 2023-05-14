#include <iostream>
using namespace std;

int main()
{
    // App 1 even/odd checker
    int num;

    cout << "Enter Num: ";
    cin >> num;
    cout <<"\n";

    if(num %2 == 0) 
        cout << num <<" Is Even Number\n";
    else
        cout << num <<" Is Odd Number\n";


    // App 2 Find greatest number
    int num1, num2, num3;

    cout <<"Enter Three Numbers: ";
    cin >> num1 >> num2 >> num3;

    if(num1 > num2 && num1 > num3)
        cout << num1 << " Is The Greatest Number\n";
    
    else if(num2 > num3)
        cout << num2 << " Is The Greatest Number\n";
    
    else 
        cout << num3 <<"  Is The Greatest Number\n";
    

    // App 3 User Rank Checker
    int points;

    cout << "Enter your Points: ";
    cin >> points;
    cout <<"\n";

    if (points < 500)
        cout << "Your Rank Is Silver\n";
    else if(points >= 500 && points < 1000)
        cout <<"Your Rank Is Gold\n";

    else if(points >= 1000)
        cout <<"Your Rank Is Platinum\n";

        return 0;
}