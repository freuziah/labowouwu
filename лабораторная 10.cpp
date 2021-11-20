#include <iostream>
using namespace std;

int main()
{
	cout << "Task 1" << "\n";
	int A, B;
	cout << "enter A and B" << "\n";
	cin >> A >> B;
	if (A > 2 && B <= 3) {
		cout << "Answer : True" << "\n" << "\n";
	}
	else {
		cout << "Answer : False" << "\n" << "\n";
	}

	cout << "Task 2" << "\n";
	int C;
	cout << "enter A, B and C" << "\n";
	cin >> A >> B >> C;
	if (A < B && B < C) {
		cout << "Answer : True" << "\n" << "\n";
	}
	else {
		cout << "Answer : False" << "\n" << "\n";
	}

	cout << "Task 3" << "\n";
	int Q;
	cout << "enter the number" << "\n";
	cin >> Q;
	if (Q % 2 == 0 && int(Q / 10) < 10 && int(Q / 10) > 0) {
		cout << "Answer : True" << "\n" << "\n";
	}
	else {
		cout << "Answer : False" << "\n" << "\n";
	}

	cout << "Task 4" << "\n";
	cout << "enter the three-digit number" << "\n";
	cin >> Q;
	int Q1 = Q / 100;
	int Q3 = Q % 10;
	int Q2 = (Q - Q1 * 100 - Q3) / 10;
	if ((Q1 < Q2 && Q2 < Q3) || (Q1 > Q2 && Q2 > Q3)) {
		cout << "Answer : True" << "\n" << "\n";
	}
	else {
		cout << "Answer : False" << "\n" << "\n";
	}

	cout << "Task 5" << "\n";
	cout << "enter the four-digit number" << "\n";
	cin >> Q;
	Q1 = Q / 100;
	Q2 = Q % 100;
	Q3 = Q2 / 10;
	int Q4 = (Q2 % 10) * 10 + Q3;
	if (Q1 == Q4) {
		cout << "Answer : True" << "\n" << "\n";
	}
	else {
		cout << "Answer : False" << "\n" << "\n";
	}

	cout << "Task 6" << "\n";
	int a, b, c;
	cout << "enter a, b and c" << "\n";
	cin >> a >> b >> c;
	if ((pow(a, 2) == pow(b, 2) + pow(c, 2)) || (pow(b, 2) == pow(a, 2) + pow(c, 2)) || (pow(c, 2) == pow(b, 2) + pow(a, 2))) {
		cout << "Answer : True" << "\n" << "\n";
	}
	else {
		cout << "Answer : False" << "\n" << "\n";
	}

	cout << "Task 6" << "\n";
	cout << "enter a, b and c" << "\n";
	cin >> a >> b >> c;
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		cout << "Answer : True" << "\n" << "\n";
	}
	else {
		cout << "Answer : False" << "\n" << "\n";
	}
}