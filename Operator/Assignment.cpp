// Assignment Operator
// Author Nahid Parvez

#include <iostream>

using namespace std;

int main()

{

    int x = 3, y = 2;

    x += y;

    cout << "The X Is:" << x << endl;

    x -= y;
    cout << "The X Is:" << x << endl;
    x *= y;
    cout << "The X Is:" << x << endl;

    x /= y;
    cout << "The X Is:" << x << endl;
    x %= y;
    cout << "The X Is:" << x << endl;

    return 0;
}