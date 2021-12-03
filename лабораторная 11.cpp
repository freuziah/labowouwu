#include <iostream>
using namespace std;

int main()
{
	cout << "Task 1" << "\n";
	int A, B;
	cout << "enter A and B" << "\n";
	cin >> A >> B;
	if (A == B) {
		A = 0;
		B = 0;
	}
	else {
		if (A > B) {
			B = A;
		}
		else {
			A = B;
		}
	}
	cout << "Answer: A = " << A << ", B = " << B << "\n" << "\n";

	cout << "Task 2" << "\n";
	int C, O;
	cout << "enter A, B and C" << "\n";
	cin >> A >> B >> C;
	if (A >= C and B >= C) {
		O = A + B;
	}
	if (B >= A and C >= A) {
		O = B + C;
	}
	if (A >= B and C >= B) {
		O = A + C;
	}
	cout << "Answer: " << O << "\n" << "\n";

	cout << "Task 3" << "\n";
	float a1, a2, b1, b2, c1, c2, R1, R2;
	cout << "enter the coordinates of point A" << "\n";
	cin >> a1 >> a2;
	cout << "enter the coordinates of point B" << "\n";
	cin >> b1 >> b2;
	cout << "enter the coordinates of point C" << "\n";
	cin >> c1 >> c2;
	R1 = sqrt(pow((a1 - b1), 2) + pow((a2 - b2), 2));
	R2 = sqrt(pow((a1 - c1), 2) + pow((a2 - c2), 2));
	if (R1 > R2) {
		cout << "Answer: C, " << R2 << "\n" << "\n";
	}
	if (R1 < R2) {
		cout << "Answer: B, " << R1 << "\n" << "\n";
	}
	if (R1 == R2) {
		cout << "Answer: the distance is the same and equal to " << R2 << "\n" << "\n";
	}


	cout << "Task 4" << "\n";
	cout << "enter the coordinates of point A" << "\n";
	cin >> a1 >> a2;
	if (a1 > 0 and a2 > 0) {
		cout << "Answer: I " << "\n" << "\n";
	}
	if (a1 < 0 and a2 > 0) {
		cout << "Answer: II " << "\n" << "\n";
	}
	if (a1 < 0 and a2 < 0) {
		cout << "Answer: III " << "\n" << "\n";
	}
	if (a1 > 0 and a2 < 0) {
		cout << "Answer: IV " << "\n" << "\n";
	}

	cout << "Task 5" << "\n";
	cout << "enter A" << "\n";
	cin >> A;
	string o1;
	string o2;
	if (A > 0) {
		o1 = "positive";
	}
	else {
		o1 = "negative";
	}
	if ((A % 2) == 0) {
		o2 = "even";
	}
	else {
		o2 = "odd";
	}
	if (A == 0) {
		cout << "Answer: zero number" << "\n" << "\n";
	}
	else {
		cout << "Answer : " << o1 << " " << o2 << " number" << "\n" << "\n";
	}

	cout << "Task 6" << "\n";
	cout << "enter A" << "\n";
	cin >> A;
	if ((A / 10) < 1) {
		o1 = "single digit";
	}
	if ((A / 10) >= 10) {
		o1 = "three - digit";
	}
	else {
		o1 = "two - digit";
	}
	if ((A % 2) == 0) {
		o2 = "even";
	}
	else {
		o2 = "odd";
	}
	cout << "Answer : " << o2 << " " << o1 << " number" << "\n" << "\n";
}