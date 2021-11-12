#include <iostream>
using namespace std;

int main()
{
	cout << "Task 1" << "\n";
	float A, B, buf;
	cout << "write A and B" << "\n";
	cin >> A >> B;
	buf = A;
	A = B;
	B = buf;
	cout << "Answer: A = " << A << ", B = " << B << "\n" << "\n";

	cout << "Task 2" << "\n";
	float A1, B1, C1, buf1;
	cout << "write A, B and C" << "\n";
	cin >> A1 >> B1 >> C1;
	buf1 = A1;
	A1 = C1;
	C1 = B1;
	B1 = buf1;
	cout << "Answer: A = " << A1 << ", B = " << B1 << ", C = " << C1 << "\n" << "\n";

	cout << "Task 3" << "\n";
	float A2, B2, C2, buf2;
	cout << "write A, B and C" << "\n";
	cin >> A2 >> B2 >> C2;
	buf2 = A2;
	A2 = B2;
	B2 = C2;
	C2 = buf2;
	cout << "Answer: A = " << A2 << ", B = " << B2 << ", C = " << C2 << "\n" << "\n";

	cout << "Task 4" << "\n";
	float x;
	cout << "write x" << "\n";
	cin >> x;
	float y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "Answer: y = " << y << "\n" << "\n";

	cout << "Task 5" << "\n";
	float x1;
	cout << "write x" << "\n";
	cin >> x1;
	float y1 = 4 * pow((x1 - 3), 6) - 7 * pow((x1 - 3), 3) + 2;
	cout << "Answer: y = " << y1 << "\n" << "\n";

	cout << "Task 6" << "\n";
	float A3;
	cout << "write A" << "\n";
	cin >> A3;
	float n = pow(A3, 5);
	cout << "Answer: A^8 = " << n * A3 * A3 * A3 << "\n" << "\n";

	cout << "Task 7" << "\n";
	float A4;
	cout << "write A" << "\n";
	cin >> A4;
	float n1 = pow(A4, 5);
	float n2 = pow(A4, 2);
	cout << "Answer: A^15 = " << n2 * n1 * n1 * A4 * A4 * A4 << "\n";
}