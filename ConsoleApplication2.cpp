#include <iostream>
using namespace std;

int main()
{
    float a = 0, b = 0;
    cout << "write a" << "\n";
    cin >> a;
    cout << "write b" << "\n";
    cin >> b;
    float S = a * b;
    float P = 2 * (a + b);
    cout << "The area of the rectangle is " << S << "\n";
    cout << "The perimeter of the rectangle is " << P;
}