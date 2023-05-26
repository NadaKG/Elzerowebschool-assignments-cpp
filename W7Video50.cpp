#include <iostream>
using namespace std;

int main()
{
    string products[] = {"item1", "item2", "item3"};
    string size[] = {"Small", "Large", "X-Large"};

    for(int i = 0; i < 3; i++)
    {
        cout << "Product Name: \n";
        cout << products[i] <<" \n";
        cout << "Sizes: \n";
        for (int j = 0; j < 3; j++)
        {
            cout << size[j];
            if(j < 2)
            {
                cout <<", ";
            }
        }
        cout << "\n";
        cout <<"================\n";
    }
    }