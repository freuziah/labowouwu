#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Task 1" << "\n";
	int A, B;
	cout << "enter two numbers" << "\n";
	cin >> A >> B;
	string o1;
	string o2;
	string o3;
	int A1 = A / 10;
	if (A1 == 2) {
		o1 = "двадцать";
	}
	if (A1 == 3) {
		o1 = "тридцать";
	}
	if (A % 10 == 1) {
		o2 = "первое";
	}
	if (A % 10 == 2) {
		o2 = "второе";
	}
	if (A % 10 == 3) {
		o2 = "третье";
	}
	if (A % 10 == 4) {
		o2 = "четвертое";
	}
	if (A % 10 == 5) {
		o2 = "пятое";
	}
	if (A % 10 == 6) {
		o2 = "шестое";
	}
	if (A % 10 == 7) {
		o2 = "седьмое";
	}
	if (A % 10 == 8) {
		o2 = "восьмое";
	}
	if (A % 10 == 9) {
		o2 = "девятое";
	}
	if (A == 11) {
		o2 = "одиннадцатое";
	}
	if (A == 12) {
		o2 = "двенадцатое";
	}
	if (A == 13) {
		o2 = "тринадцатое";
	}
	if (A == 14) {
		o2 = "четырнадцатое";
	}
	if (A == 15) {
		o2 = "пятнадцатое";
	}
	if (A == 16) {
		o2 = "шестнадцатое";
	}
	if (A == 17) {
		o2 = "семнадцатое";
	}
	if (A == 18) {
		o2 = "восемнадцатое";
	}
	if (A == 19) {
		o2 = "девятнадцатое";
	}
	if (A == 20) {
		o1 = "двадцатое";
	}
	if (A == 10) {
		o1 = "десятое";
	}
	if (A == 30) {
		o1 = "тридцатое";
	}
	if (B == 1) {
		o3 = "января";
	}
	if (B == 2) {
		o3 = "февраля";
	}
	if (B == 3) {
		o3 = "марта";
	}
	if (B == 4) {
		o3 = "апреля";
	}
	if (B == 5) {
		o3 = "мая";
	}
	if (B == 6) {
		o3 = "июня";
	}
	if (B == 7) {
		o3 = "июля";
	}
	if (B == 8) {
		o3 = "августа";
	}
	if (B == 9) {
		o3 = "сентября";
	}
	if (B == 10) {
		o3 = "октября";
	}
	if (B == 11) {
		o3 = "ноября";
	}
	if (B == 12) {
		o3 = "декабря";
	}
	cout << "Answer: " << o1 << " " << o2 << " " << o3 << "\n" << "\n";

	cout << "Task 2" << "\n";
	int ch;
	char n;
	cout << "Введите направление робота («N» — север, «W» — запад, «S» — юг, «E» — восток)" << "\n";
	cin >> n;
	cout << "Введите команду (0 — продолжать движение, 1 — поворот налево, −1 — поворот направо)" << "\n";
	cin >> ch;
	switch (n) {
	case 'N':
		switch (ch) {
		case 1:
			n = 'W';
			break;
		case 0:
			n = 'N';
			break;
		case -1:
			n = 'E';
			break;
		}
		break;
	case 'W':
		switch (ch) {
		case 1:
			n = 'S';
			break;
		case 0:
			n = 'W';
			break;
		case -1:
			n = 'N';
			break;
		}
	case 'S':
		switch (ch) {
		case 1:
			n = 'E';
			break;
		case 0:
			n = 'S';
			break;
		case -1:
			n = 'W';
			break;
		}
		break;
	case 'E':
		switch (ch) {
		case 1:
			n = 'N';
			break;
		case 0:
			n = 'E';
			break;
		case -1:
			n = 'S';
			break;
		}
	}
	cout << "Answer: " << n << "\n" << "\n";

	cout << "Task 3" << "\n";
	int o;
	cout << "Введите целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме" << "\n";
	cin >> o;
	if (o / 10 == 1)
		switch (o) {
		case 10:
			cout << "десять учебных заданий";
			break;
		case 11:
			cout << "одинадцать учебных заданий";
			break;
		case 12:
			cout << "двенадцать учебных заданий";
			break;
		case 13:
			cout << "тринадцать учебных заданий";
			break;
		case 14:
			cout << "четырнадцать учебных заданий";
			break;
		case 15:
			cout << "пятнадцать учебных заданий";
			break;
		case 16:
			cout << "шестнадцать учебных заданий";
			break;
		case 17:
			cout << "семнадцать учебных заданий";
			break;
		case 18:
			cout << "восемнадцать учебных заданий";
			break;
		case 19:
			cout << "девятнадцать учебных заданий";
			break;
		}
	else {
		switch (o / 10) {
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать ";
			break;
		case 4:
			cout << "сорок ";
			break;
		}

		switch (o % 10) {
		case 1:
			cout << "одно ";
			break;
		case 2:
			cout << "два ";
			break;
		case 3:
			cout << "три ";
			break;
		case 4:
			cout << "четыре ";
			break;
		case 5:
			cout << "пять ";
			break;
		case 6:
			cout << "шесть ";
			break;
		case 7:
			cout << "семь ";
			break;
		case 8:
			cout << "восемь ";
			break;
		case 9:
			cout << "девять ";
			break;
		}

		switch (o % 10) {
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			cout << "учебных заданий";
			break;
		case 1:
			cout << "учебное задание";
			break;
		case 2:
		case 3:
		case 4:
			cout << "учебных задания";
			break;
		}
	}
	cout << "\n" << "\n";

	cout << "Task 4" << "\n";
	cout << "Введите целое число в диапазоне 100-999" << "\n";
	cin >> o;
	switch (o / 100) {
	case 1:
		cout << "сто ";
		break;
	case 2:
		cout << "двести ";
		break;
	case 3:
		cout << "триста ";
		break;
	case 4:
		cout << "четыреста ";
		break;
	case 5:
		cout << "пятьсот ";
		break;
	case 6:
		cout << "шестьсот ";
		break;
	case 7:
		cout << "семьсот ";
		break;
	case 8:
		cout << "восемьсот ";
		break;
	case 9:
		cout << "девятьсот ";
		break;
	}

	if ((o % 100) / 10 == 1)
		switch (o % 100) {
		case 10:
			cout << "десять";
			break;
		case 11:
			cout << "одинадцать";
			break;
		case 12:
			cout << "двенадцать";
			break;
		case 13:
			cout << "тринадцать";
			break;
		case 14:
			cout << "четырнадцать";
			break;
		case 15:
			cout << "пятнадцать";
			break;
		case 16:
			cout << "шестнадцать";
			break;
		case 17:
			cout << "семнадцать";
			break;
		case 18:
			cout << "восемнадцать";
			break;
		case 19:
			cout << "девятнадцать";
			break;
		}
	else {
		switch ((o % 100) / 10) {
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать ";
			break;
		case 4:
			cout << "сорок ";
			break;
		case 5:
			cout << "пятьдесят ";
			break;
		case 6:
			cout << "шестьдесят ";
			break;
		case 7:
			cout << "семьдесят ";
			break;
		case 8:
			cout << "восемьдесят ";
			break;
		case 9:
			cout << "девяносто ";
			break;
		}

		switch (o % 10) {
		case 1:
			cout << "один";
			break;
		case 2:
			cout << "два";
			break;
		case 3:
			cout << "три";
			break;
		case 4:
			cout << "четыре";
			break;
		case 5:
			cout << "пять";
			break;
		case 6:
			cout << "шесть";
			break;
		case 7:
			cout << "семь";
			break;
		case 8:
			cout << "восемь";
			break;
		case 9:
			cout << "девять";
			break;
		}
	}
	cout << "\n" << "\n";

	cout << "Task 5" << "\n";
	cout << "Введите год: " << "\n";
	cin >> o;
	cout << "год ";
	switch ((o) % 10) {
	case 0:
	case 1:
		cout << "бел";
		break;
	case 2:
	case 3:
		cout << "черн";
		break;
	case 4:
	case 5:
		cout << "зелён";
		break;
	case 6:
	case 7:
		cout << "красн";
		break;
	case 8:
	case 9:
		cout << "жёлт";
		break;
	}
	switch ((o + 1) % 5) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 9:
	case 10:
	case 11:
		cout << "ой ";
		break;
	case 6:
	case 7:
	case 8:
		cout << "ого ";
		break;
	}

	switch ((o + 8) % 12) {
	case 0:
		cout << "крысы";
		break;
	case 1:
		cout << "коровы";
		break;
	case 2:
		cout << "тигра";
		break;
	case 3:
		cout << "зайца";
		break;
	case 4:
		cout << "дракона";
		break;
	case 5:
		cout << "змеи";
		break;
	case 6:
		cout << "лошади";
		break;
	case 7:
		cout << "овцы";
		break;
	case 8:
		cout << "обезьяны";
		break;
	case 9:
		cout << "курицы";
		break;
	case 10:
		cout << "собаки";
		break;
	case 11:
		cout << "свиньи";
		break;
	}
	cout << "\n";
}