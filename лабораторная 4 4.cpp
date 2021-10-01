#include <iostream>
using namespace std;

int main()
{
    float a = 0, b = 0;
    cout << "write a" << "\n";
    cin >> a;
    cout << "write b" << "\n";
    cin >> b;
    float a1 = a * a;
    float b1 = b * b;
    if ((a == 0) or (b == 0)) cout << "Check the correctness of the entered data";
    else cout << "a² + b² = " << a1 + b1 << "\n" << "a² - b² = " << a1 - b1 << "\n" << "a² * b² = " << a1 * b1 << "\n" << "a² / b² = " << a1 / b1;

}