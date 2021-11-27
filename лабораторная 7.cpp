#include <iostream>
using namespace std;

int main()
{
	cout << "Task 1" << "\n";
	float A;
	cout << "write A" << "\n";
	cin >> A;
	const double p = 3.141592653589793;
	float S1 = A / (180 / p);
	cout << "Answer: A = " << S1 << " radians" << "\n" << "\n";

	cout << "Task 2" << "\n";
	float A1;
	cout << "write A" << "\n";
	cin >> A1;
	float S2 = A1 * (180 / p);
	cout << "Answer: A = " << S2 << " degrees" << "\n" << "\n";

	cout << "Task 3" << "\n";
	float X, A2, Y;
	cout << "write X, A and Y" << "\n";
	cin >> X >> A2 >> Y;
	float o1 = A2 / X;
	float o2 = o1 * Y;
	cout << "Answer: 1 kg costs " << o1 << " rub, " << Y << " kg costs " << o2 << " rub" << "\n" << "\n";

	cout << "Task 4" << "\n";
	float V1, V2, S, T;
	cout << "write V1, V2, S, T" << "\n";
	cin >> V1 >> V2 >> S >> T;
	float O = S + (V1 + V2) * T;
	cout << "Answer: the distance is equal to " << O << "\n" << "\n";

	cout << "Task 5" << "\n";
	float A3, B;
	cout << "write A and B" << "\n";
	cin >> A3 >> B;
	float X1 = (-1) * B / A3;
	cout << "Answer: " << X1 << "\n" << "\n";

	cout << "Task 6" << "\n";
	float a1, b1, a2, b2, x, y, c1, c2;
	cout << "write a1, b1 and c1" << "\n";
	cin >> a1 >> b1 >> c1;
	cout << "write a2, b2 and c2" << "\n";
	cin >> a2 >> b2 >> c2;
	if (a1 == 0 and b1 == 0 and c1 == 0) {
		cout << "the system of equations loses its meaning, the values of x and y cannot be found" << "\n";
	}
	else if (a1 == 0 and b1 == 0 and c1 != 0) {
		cout << "if the coefficient at x and y are 0, the result should also be 0" << "\n";
	}
	else if (a2 == 0 and b2 == 0 and c2 != 0) {
		cout << "if the coefficient at x and y are 0, the result should also be 0" << "\n";
	}
	else if (a2 == 0 and b2 == 0 and c2 == 0) {
		cout << "the system of equations loses its meaning, the values of x and y cannot be found" << "\n";
	}
	else if (a2 == 0 and a1 == 0) {
		cout << "the system of equations loses its meaning, the values of x and y cannot be found" << "\n";
	}
	else if (b2 == 0 and b1 == 0) {
		cout << "the system of equations loses its meaning, the values of x and y cannot be found" << "\n";
	}
	else if (a1 == 0 and b1 != 0 and a2 != 0) {
		y = c1 / b1;
		x = (c2 - b2 * y) / a2;
		cout << "x = " << x << "\n";
		cout << "y = " << y << "\n";
	}
	else if (a1 != 0 and b1 == 0 and b2 != 0) {
		x = c1 / a1;
		y = (c2 - a2 * x) / b2;
		cout << "x = " << x << "\n";
		cout << "y = " << y << "\n";
	}
	else if (a2 == 0 and b2 != 0 and a1 != 0) {
		y = c2 / b2;
		x = (c1 - b1 * y) / a1;
		cout << "x = " << x << "\n";
		cout << "y = " << y << "\n";
	}
	else if (b2 == 0 and b2 != 0 and a2 != 0) {
		x = c2 / a2;
		y = (c1 - a1 * x) / b1;
		cout << "x = " << x << "\n";
		cout << "y = " << y << "\n";
	}
	else if (a2 != 0 and a1 != 0 and b2 != 0) {
		b2 = b2 * (a1 / a2) - b1;
		c2 = c2 * (a1 / a2) - c1;
		y = c2 / b2;
		x = (c1 - b1 * y) / a1;
		cout << "x = " << x << "\n";
		cout << "y = " << y << "\n";
	}
	return 0;
}
