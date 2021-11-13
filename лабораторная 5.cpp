#include <iostream>
using namespace std;

int main()
{
    cout << "Task 1" << "\n";
    float x1, x2, y1, y2;
    cout << "write x1 and y1" << "\n";
    cin >> x1 >> y1;
    cout << "write x2 and y2" << "\n";
    cin >> x2 >> y2;
    float L = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    cout << "the answer is " << L << "\n" << "\n";

    cout << "Task 2" << "\n";
    float A1, B1, C1;
    cout << "write A, B and C" << "\n";
    cin >> A1 >> B1 >> C1;
    float AC1 = fabs(A1 - C1);
    float BC1 = fabs(B1 - C1);
    float Sum = AC1 + BC1;
    cout << "AC = " << AC1 << "\n" << "BC = " << BC1 << "\n" << "the sum is " << Sum << "\n" << "\n";

    cout << "Task 3" << "\n";
    float A2, B2, C2;
    cout << "write A, B and C (C lies between A and B)" << "\n";
    cin >> A2 >> B2 >> C2;
    float AC2 = fabs(A2 - C2);
    float BC2 = fabs(B2 - C2);
    float Pr = AC2 * BC2;
    cout << "AC = " << AC2 << "\n" << "BC = " << BC2 << "\n" << "the product is " << Pr << "\n" << "\n";

    cout << "Task 4" << "\n";
    float x11, x22, y11, y22;
    cout << "write x1 and y1" << "\n";
    cin >> x11 >> y11;
    cout << "write x2 and y2" << "\n";
    cin >> x22 >> y22;
    float s1 = fabs(y22 - y11);
    float s2 = fabs(x22 - x11);
    float P = 2 * (s1 + s2);
    float S = s1 * s2;
    cout << "the perimetr is " << P << "\n" << "the square is " << S << "\n" << "\n";

    cout << "Task 5" << "\n";
    float q1, w1, q2, w2, q3, w3;
    cout << "write x1 and y1" << "\n";
    cin >> q1 >> w1;
    cout << "write x2 and y2" << "\n";
    cin >> q2 >> w2;
    cout << "write x3 and y3" << "\n";
    cin >> q3 >> w3;
    float l1 = sqrt(pow((q1 - q2), 2) + pow((w1 - w2), 2));
    float l2 = sqrt(pow((q1 - q3), 2) + pow((w1 - w3), 2));
    float l3 = sqrt(pow((q2 - q3), 2) + pow((w2 - w3), 2));
    float P1 = l1 + l2 + l3;
    float p2 = P1 / 2;
    float S1 = sqrt(p2 * (p2 - l1)*(p2 - l2)*(p2 - l3));
    cout << "the perimetr is " << P1 << "\n" << "the square is " << S1 << "\n";

}
