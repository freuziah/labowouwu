#include <iostream>
using namespace std;

double PowerA3(float A, float B = 0) {
	B = A * A * A;
	return B;
}

int Sign(float X) {
	if (X < 0) {
		return -1;
	}
	else if (X > 0) {
		return 1;
	}
	else {
		return 0;
	}
}

float RingS(float R1, float R2) {
	return 3.14 * (R1 * R1 - R2 * R2);
}

int Qarter(float x, float y) {
	if (x > 0 && y > 0)
		cout << "Ответ: I координатная четверть" << "\n";
	if (x < 0 && y > 0)
		cout << "Ответ: II координатная четверть" << "\n";
	if (x < 0 && y < 0)
		cout << "Ответ: III координатная четверть" << "\n";
	if (x > 0 && y < 0)
		cout << "Ответ: IV координатная четверть" << "\n";
	return 0;
}

float Fact2(int n) {
	float k = 1;
	for (int i = 1; i <= n; i++) {
		if ((n % 2 == 0) && (i % 2 == 0)) {
			k = k * (float)i;
		}
		if ((n % 2 != 0) && (i % 2 != 0)) {
			k = k * (float)i;
		}
	}
	return k;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Задание 1" << "\n";
	float A, B;
	for (int i = 0; i < 5; i++) {
		cout << "Введите число A" << "\n";
		cin >> A;
		cout << "Ответ: " << PowerA3(A) << "\n";
	}
	cout << "\n";

	cout << "Задание 2" << "\n";
	cout << "Введите число A" << "\n";
	cin >> A;
	cout << "Введите число B" << "\n";
	cin >> B;
	cout << "Ответ: " << Sign(A) + Sign(B) << "\n" << "\n";

	cout << "Задание 3" << "\n";
	float R1, R2;
	for (int i = 0; i < 3; i++) {
		cout << "Введите радиус R1" << "\n";
		cin >> R1;
		cout << "Введите радиус R2 (R2 < R1)" << "\n";
		cin >> R2;
		cout << "Ответ: " << RingS(R1, R2) << "\n";
	}
	cout << "\n";

	cout << "Задание 4" << "\n";
	float x, y;
	for (int i = 0; i < 3; i++) {
		cout << "Введите ненулевую координату X" << "\n";
		cin >> x;
		cout << "Введите ненулевую координату Y" << "\n";
		cin >> y;
		Qarter(x, y);
		cout << "\n";
	}
	cout << "\n";

	cout << "Задание 5" << "\n";
	int n;
	cout << "Введите N" << "\n";
	cin >> n;
	cout << "Ответ: " << Fact2(n) << "\n";
}