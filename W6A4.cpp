#include <iostream>
#include <array>
using namespace std;

int main()
{
    // Example 1
    int vals[]{100, 200, 500, 400, 200};
    int results;
    
    if((vals[0] + vals[4]) > vals[2]) {

        results = vals[0] + vals[4];
        cout <<"First Number + Last Number Is Larger Than Middle Number\n";
        cout << vals[0] << " + " << vals[4] <<" = " << results << "\n";
        cout << results << " > " << vals[2] <<"\n";
    }
    else if((vals[1] + vals[3]) > vals[2]) {

        results = vals[1] + vals[3];
        cout <<"Second Number + Before Last Number Is Larger Than Middle Number\n";
        cout << vals[1] << " + " << vals[3] <<" = " << results << "\n";
        cout << results << " > " << vals[2] <<"\n";
    }
    else {
        cout << "Middle Number is the Largest\n";
        cout << vals[2];
    }}

