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
	float Q, W, E, Q1, W1, E1;
	cout << "write A1, B1 and C1" << "\n";
	cin >> Q >> W >> E;
	cout << "write A2, B2 and C2" << "\n";
	cin >> Q1 >> W1 >> E1;
	float N = (E1 - (Q1 * E) / Q) / (W1 - (Q1 * W) / Q);
	float M = (E - W * N) / Q;
	cout << "Answer: x = " << M << ", y = " << N << "\n";
}