// Bitwise Operator
// Author: Nahid Parvez

#include <iostream>
using namespace std;

int main()

{

    // & bitwise AND
    // | bitwise OR
    // ^ bitwise EXOR
    // >> bitwise shift right (2 step Division)
    // << bitwise shift left  (2 step multiplication)
    // ~ bitwise NOT

    int x = 5;
    int y = 10;
    int result;

    result = x & y;

    cout << "The X Is:" << result << endl;

    result = x | y;

    cout << "The X Is:" << result << endl;

    result = x ^ y;

    cout << "The X Is:" << result << endl;
    result = x >> y;

    cout << "The X Is:" << result << endl;
    result = x << y;

    cout << "The X Is:" << result << endl;

    return 0;
}