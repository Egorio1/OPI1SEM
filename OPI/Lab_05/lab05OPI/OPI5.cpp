#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choise; unsigned char chislo; unsigned char EngSyma, EngSymb; unsigned char RusSyma, RusSymb;
	while (true) {
	cout << "1 - английский , 2 - русский, 3 - число, 4 - выход " << endl;
	cin >> choise;
	
		switch (choise) {
		case 1:
			cout << "Введите заглавную английскую: "; cin >> EngSyma;
			cout << "Введите строчную английскую: "; cin >> EngSymb;
			cout << (int)EngSyma << endl;
			cout << (int)EngSymb << endl;
			if (EngSyma > 64 && EngSyma < 91 && EngSymb > 90 && EngSymb < 123) {
				cout << " Разница значений: " << fabs(int(EngSymb) - int(EngSyma)) << endl;
			}
			else {
				cout << "Данные введены не корректно " << endl;
			}
			break;
		case 2:
			cout << "Введите заглавную русскую: "; cin >> RusSyma;
			cout << "Введите строчную русскую: "; cin >> RusSymb;
			cout << (int)RusSyma << endl;
			cout << (int)RusSymb << endl;
			if (RusSyma >= 191 && RusSyma <= 224 && RusSymb >= 223 && RusSymb <= 256) {
				cout << " Разница значений: " << fabs(int(RusSyma) - int(RusSymb)) << endl;
			}
			else {
				cout << "Данные введены не корректно " << endl;
			}
			break;
		case 3:
			cout << "Введите цифру: "; cin >> chislo;
			cout << (int)chislo << endl;
			if (chislo >= 48 && chislo <= 57) {
				cout << "Код c = " << (int)chislo << endl;
			}
			else {
				cout << "Данные введены не корректно " << endl;;
			}
			break;
		case 4:
			cout << "Exit" << endl;
			return 0;
		}
	}
}
