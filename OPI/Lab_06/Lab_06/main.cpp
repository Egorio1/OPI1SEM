#include <iostream>
#include <windows.h>
#include "Header.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k; string c = " "; string a = " ", b = " "; unsigned char e, d; int res = 0;
	while (true) {
		cout << "1 - английский , 2 - русский, 3 - число, 4 - выход " << endl;
		cin >> k;
		switch (k) {
		case 1:
			cout << "Введите заглавную английскую "; cin >> a;
			cout << "Введите строчную английскую  "; cin >> b;
			res = engCode(a, b);
			if (res != 0) {
				cout << "Разница значений: " << res << endl;;
			}
			else {
				cout << "Данные введены не корректно!" << endl;;
			}
			break;
		case 2:
			cout << "Введите заглавную русскую: "; cin >> e;
			cout << "Введите строчную русскую: "; cin >> d;
			cout << (int)e << endl;
			cout << (int)d << endl;
			res = rusCode(e, d);
			if (res != 0) {
				cout << "Разница занчений: " << res << endl;
			}
			else {
				cout << "Данные введены не корректно!! " << endl;
			}
			break;

		case 3:
			cout << "Введите цифру: "; cin >> c;

			res = numCode(c);
			break;
		case 4:
			cout << "Exit";
			return 0;
		}
	}
}
