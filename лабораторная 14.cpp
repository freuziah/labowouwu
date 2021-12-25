#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Задание 1" << "\n";
	int A, B;
	cout << "Введите целое положительное число A" << "\n";
	cin >> A;
	cout << "Введите целое положительное число B (B > A)" << "\n";
	cin >> B;
	cout << "Ответ: ";
	for (int i = A; i <=B; i++) {
		for (int j = 0; j < i; j++) {
			cout << i << " ";
		}
		cout << "\n";
	}
	cout << "\n";

	cout << "Задание 2" << "\n";
	cout << "Введите длину отрезка A" << "\n";
	cin >> A;
	cout << "Введите длину отрезка B (B < A)" << "\n";
	cin >> B;
	while (A - B >= 0)
	{
		A = A - B;
	}
	cout << "Ответ: " << A << "\n" << "\n";

	cout << "Задание 3" << "\n";
	int n;
	cout << "Введите целое число N (N > 1)" << "\n";
	cin >> n;
	int i = 0;
	int s = 0;
	while (s < n) {
		i++;
		s += i;
	}
	cout << "Ответ: " << i << ", " << s << "\n" << "\n";

	cout << "Задание 4" << "\n";
	float p;
	i = 0;
	float wtf = 1000;
	cout << "Введите процент P (0 < P < 25)" << "\n";
	cin >> p;
	while (wtf <= 1100) {
		i++;
		wtf += wtf * p / 100;
	}
	cout << "Ответ: количество месяцев равно " << i << ", " << "итоговый размер вклада равен " << wtf << "\n" << "\n";

	cout << "Задание 5" << "\n";
	cout << "Введите целое положительное число A" << "\n";
	cin >> A;
	cout << "Введите целое положительное число B" << "\n";
	cin >> B;
	while (A != 0 && B != 0) {
		if (A > B) {
			A = A % B;
		}
		else {
			B = B % A;
		}
	}
	cout << "Ответ: " << A + B << "\n" << "\n";

	cout << "Задание 6" << "\n";
	cout << "Введите целое число N (N > 1)" << "\n";
	cin >> n;
	int a1 = 1, a2 = 1, f = 0;
	i = 2;
	while (f < n) {
		i++;
		f = a1 + a2;
		a2 = a1;
		a1 = f;
	}
	cout << "Ответ: " << i << "\n";
}