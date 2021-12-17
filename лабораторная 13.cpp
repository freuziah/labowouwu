#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 1" << "\n";
	float a;
	cout << "Введите цену за килограмм" << "\n";
	cin >> a;
	for (float i = 0.1; i < 1.1; i += 0.1)
	{
		cout << "Ответ: Цена за " << i << " кг конфет = " << a * i << "\n" << "\n";
	}

	cout << "Задание 2" << "\n";
	float n, i = 0.1, k = 1;
	cout << "Введите целое число N (> 0)" << "\n";
	cin >> n;
	while (i <= n)
	{
		k *= k;
		i += 0.1;
	}
	cout << "Ответ: Произведение N сомножителей = " << k << "\n" << "\n";

	cout << "Задание 3" << "\n";
	cout << "Введите целое число N (> 0)" << "\n";
	cin >> n;
	k = 0;
	cout << "Ответ: " << "\n";
	for (int i = 1; i <= (2 * n - 1); i += 2)
	{
		k += i;
		cout << k << "\n";
	}
	cout << "\n";

	cout << "Задание 4" << "\n";
	float A;
	cout << "Введите вещественное число A" << "\n";
	cin >> A;
	cout << "Введите целое число N (> 0)" << "\n";
	cin >> n;
	float A2 = 1;
	k = 1;
	for (int i = 1; i <= n; i++)
	{
		A2 *= A;
		k += A2;
	}
	cout << "Ответ: " << k << "\n" << "\n";

	cout << "Задание 5" << "\n";
	cout << "Введите вещественное число A" << "\n";
	cin >> A;
	cout << "Введите целое число N (> 0)" << "\n";
	cin >> n;
	k = 1;
	float B = 0, C = 0;
	for (int i = 1; i <= n; i += 2)
	{
		B += pow(A, i);
	}
	for (int i = 2; i <= n; i += 2)
	{
		C += pow(A, i);
	}
	cout << "Ответ: " << (float)(k - B + C) << "\n";
}