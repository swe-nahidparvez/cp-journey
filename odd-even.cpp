// Odd, Even, Positive and Negative Number Finder
// Author: Nahid Parvez

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a num: ";
    cin >> num;

    if (num < 0)
    {
        cout << "It is a (-ve) num:" << num << endl;
    }
    if (num == 0)
    {
        cout << "It is a (+ve) num:" << num << endl;
    }
    if (num % 2 == 0)
    {
        cout << "Num is an even value:" << num << endl;
    }
    else
    {

        cout << "The num is an Odd value:" << num << endl;
    }

    return 0;
}