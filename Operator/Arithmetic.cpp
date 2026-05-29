// Arithmetic Operator
// Author: Nahid Parvez

#include <iostream>

using namespace std;

int main()

{

    int a = 5, b = 10, c = 15, d = 20, e = 25, f = 30, g = 35, h, i, j, k, l;

    h = a + b;

    i = c - d;

    j = e * f;

    k = g % d;

    l = f / a;

    cout << "Addition value is:" << h << endl;
    cout << "Substraction value is:" << i << endl;
    cout << "Multiplication value is:" << j << endl;
    cout << "Modulus value is:" << k << endl;
    cout << "Division value is:" << l << endl;

    // increment and decrement

    int num1 = 5, num2 = 10, num3;

    num3 = ++num2;

    cout << num3 << endl;

    return 0;
}