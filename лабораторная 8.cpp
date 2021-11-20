#include <iostream>
using namespace std;

int main()
{
	cout << "Task 1" << "\n";
	int byt;
	cout << "enter the number of bytes" << "\n";
	cin >> byt;
	int kil = byt / 1024;
	int kil1 = byt % 1024;
	if (kil1 > 0) {
		kil = kil + 1;
	}
	cout << "Answer : " << kil << " kilobyte(s)" << "\n" << "\n";

	cout << "Task 2" << "\n";
	int A, B;
	cout << "enter A and B (A > B)" << "\n";
	cin >> A >> B;
	int kol = A / B;
	cout << "Answer : " << kol << " segment(s)" << "\n" << "\n";

	cout << "Task 3" << "\n";
	cout << "enter A and B (A > B)" << "\n";
	cin >> A >> B;
	kol = A / B;
	int O = A - B * kol;
	cout << "Answer : " << O << "\n" << "\n";

	cout << "Task 4" << "\n";
	int C;
	cout << "enter two-digit number" << "\n";
	cin >> C;
	int C1 = C / 10;
	int C2 = (C - C1 * 10)*10;
	O = C1 + C2;
	cout << "Answer : " << O << "\n" << "\n";


	cout << "Task 5" << "\n";
	cout << "enter three-digit number" << "\n";
	cin >> C;
	C1 = C / 100;
	C2 = (C - C1 * 100) * 10;
	O = C1 + C2;
	cout << "Answer : " << O << "\n" << "\n";
}
