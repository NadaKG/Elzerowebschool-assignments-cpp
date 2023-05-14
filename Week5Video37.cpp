#include <iostream>
using namespace std;

int main()
{
    // App 1 > Award system
    int num;
    cout << "Type The Number: ";
    cin >> num;
    cout <<"\n";

    switch(num){
        case 1:
        case 4:
        case 10:
            cout << "You Won 10 Pounds\n";
            break;
        case 2:
        case 18:
            cout << "You Won 1000 Pounds\n";
            break;
        default:
            cout << "Better Luck Next Time\n";
    }
    
    // App 2 > Discount Application
    int price = 100;
    int discount = 0;
    int years;

    cout << "Enter Years: \n";
    cin >> years;

    switch(years){
    case 1:
        discount = 20;
        break;
    case 2:
        discount = 40;
        break;
    case 3:
        discount = 60;
        break;
    }
    
    cout << "Your price will be: " << price - discount << "\n";

    // App 3 > Simple Calculator
    int n1, n2 ,op;
    
    cout <<"Type Number One: \n";
    cin >> n1;
    cout <<"Type Number Two: \n";
    cin >> n2;
    cout <<"Operation: \n";
    cout <<"[1]  + \n";
    cout <<"[2]  - \n";
    cout <<"[3]  / \n";
    cout <<"[4]  * \n";
    cin >> op;
    
    switch(op){
        case 1:
        cout << n1 << " + " << n2 << " = " << n1 + n2 <<"\n";
        break;
        case 2:
        cout << n1 << " - " << n2 << " = " << n1 - n2 <<"\n";
        break;
        case 3:
        cout << n1 << " / " << n2 << " = " << n1 / n2 <<"\n";
        break;
        case 4:
        cout << n1 << " * " << n2 << " = " << n1 * n2 <<"\n";
        break;
        default:
        cout <<"Invalid Operation\n";
    }
    return 0;
}