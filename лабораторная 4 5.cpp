#include <iostream>
using namespace std;

int main()
{
    float a = 0, b = 0;
    cout << "write a" << "\n";
    cin >> a;
    cout << "write b" << "\n";
    cin >> b;
    float a1 = fabs(a);
    float b1 = fabs(b);
    if ((a == 0) or (b == 0)) cout << "Check the correctness of the entered data";
    else cout << "|a| + |b| = " << a1 + b1 << "\n" << "|a| - |b| = " << a1 - b1 << "\n" << "|a| * |b| = " << a1 * b1 << "\n" << "|a| / |b| = " << a1 / b1;

}