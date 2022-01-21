#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Задание 1" << "\n";
	int n;
	cout << "Введите размер массива N (N > 0)" << "\n";
	cin >> n;
	int* arr = new int[n];
	cout << "Ответ: " << "\n";
	for (int i = 0; i < n; i++)
	{
		arr[i] = 1 + i * 2;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	delete[] arr;
	cout << "\n" << "\n";


	cout << "Задание 2" << "\n";
	int a, d;
	cout << "Введите размер массива N (N > 1)" << "\n";
	cin >> n;
	cout << "Введите первый член геометрической прогрессии" << "\n";
	cin >> a;
	cout << "Введите знаменатель геометрической прогрессии" << "\n";
	cin >> d;
	arr = new int[n];
	cout << "Ответ: " << "\n";
	for (int i = 0; i < n; i++)
	{
		arr[i] = a * pow(d, i);
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	delete[] arr;
	cout << "\n" << "\n";

	cout << "Задание 3" << "\n";
	int b;
	cout << "Введите размер массива N (N > 2)" << "\n";
	cin >> n;
	cout << "Введите первый элемент массива" << "\n";
	cin >> a;
	cout << "Введите второй элемент массива" << "\n";
	cin >> b;
	arr = new int[n];
	arr[0] = a;
	arr[1] = b;
	int s;
	cout << "Ответ: " << "\n";
	for (int i = 2; i < n; i++)
	{
		s = 0;
		for (int j = 0; j < i; j++)
		{
			s = s + arr[j];
		}
		arr[i] = s;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	delete[] arr;
	cout << "\n" << "\n";

	cout << "Задание 4" << "\n";
	cout << "Введите размер массива N" << "\n";
	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 90 + 10;
	}
	cout << "Массив: " << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
	cout << "Ответ: " << "\n";
	for (int i = 0; i < n / 2; i++)
	{
		cout << arr[i] << " ";
		cout << arr[n - 1 - i] << " ";
	}
	if (n % 2 != 0)
		cout << arr[n / 2] << "\n";
	delete[] arr;
	cout << "\n" << "\n";

	cout << "Задание 5" << "\n";
	cout << "Введите размер массива N" << "\n";
	cin >> n;
	arr = new int[n];
	cout << "Массив: " << "\n";
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 90 + 10;
		cout << arr[i] << " ";
	}
	cout << "\n";
	cout << "Элементы с нечетными номерами в порядке возрастания номеров: " << "\n";
	for (int i = 1; i < n; i += 2)
	{
		cout << i << " - " << arr[i] << ", ";
	}
	cout << "\n";
	cout << "Элементы с четными номерами в порядке убывания номеров: " << "\n";
	for (int i = n - (n % 2); i >= 0; i -= 2)
	{
		cout << i << " - " << arr[i] << ", ";
	}
	cout << "\n";
}