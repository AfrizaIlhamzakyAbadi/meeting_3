#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "To check which number is the largest of 3 numbers a, b, and c, enter the following values." << endl;
    float a, b, c;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    if (a >= b && a >= c)
    {
        cout << a << " is the largest number." << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << b << " is the largest number." << endl;
    }
    else
    {
        cout << c << " is the largest number." << endl;
    }
    return 0;
}