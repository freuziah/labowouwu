#include <iostream>
using namespace std;

int main()
{
	cout << "Task 1" << "\n";
	int A;
	cout << "enter the number of seconds" << "\n";
	cin >> A;
	int A1 = A / 60;
	int O = A - A1*60;
	cout << "Answer : " << O << " second(s)" << "\n" << "\n";

	cout << "Task 2" << "\n";
	int K;
	cout << "enter K (1 ⩽ K ⩽ 365)" << "\n";
	cin >> K;
	int K1 = K / 7;
	int K2 = K - K1 * 7;
	if (K2 == 0) {
		cout << "Answer : Sunday" << "\n" << "\n";
	}
	if (K2 == 1) {
		cout << "Answer : Monday" << "\n" << "\n";
	}
	if (K2 == 2) {
		cout << "Answer : Tuesday" << "\n" << "\n";
	}
	if (K2 == 3) {
		cout << "Answer : Wednesday" << "\n" << "\n";
	}
	if (K2 == 4) {
		cout << "Answer : Thursday" << "\n" << "\n";
	}
	if (K2 == 5) {
		cout << "Answer : Friday" << "\n" << "\n";
	}
	if (K2 == 6) {
		cout << "Answer : Saturday" << "\n" << "\n";
	}

	cout << "Task 3" << "\n";
	int N;
	cout << "enter K (1-365) and N (1-7)" << "\n";
	cin >> K >> N;
	int Q = N - 1;
	K1 = K / 7;
	K2 = K - K1 * 7 + Q;
	int K3 = K2 / 7;
	int K4 = K2 - K3 * 7;
	if (K4 == 0) {
		cout << "Answer : Sunday" << "\n" << "\n";
	}
	if (K4 == 1) {
		cout << "Answer : Monday" << "\n" << "\n";
	}
	if (K4 == 2) {
		cout << "Answer : Tuesday" << "\n" << "\n";
	}
	if (K4 == 3) {
		cout << "Answer : Wednesday" << "\n" << "\n";
	}
	if (K4 == 4) {
		cout << "Answer : Thursday" << "\n" << "\n";
	}
	if (K4 == 5) {
		cout << "Answer : Friday" << "\n" << "\n";
	}
	if (K4 == 6) {
		cout << "Answer : Saturday" << "\n" << "\n";
	}

	cout << "Task 4" << "\n";
	int B, C;
	cout << "enter A, B and C" << "\n";
	cin >> A >> B >> C;
	A1 = A / C;
	int B1 = B / C;
	int C1 = A1 * B1;
	cout << "Answer : " << C1 << " square(s)" << "\n" << "\n";

	cout << "Task 5" << "\n";
	int G;
	cout << "enter the year" << "\n";
	cin >> G;
	int G1 = G / 100;
	int G2 = G1 * 100;
	if (G - G2 == 0) {
		cout << "Answer : " << G1 << "\n" << "\n";
	}
	else {
		cout << "Answer : " << G1 + 1 << "\n" << "\n";
	}
}