#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choise; unsigned char chislo; unsigned char EngSyma, EngSymb; unsigned char RusSyma, RusSymb;
	while (true) {
	cout << "1 - ���������� , 2 - �������, 3 - �����, 4 - ����� " << endl;
	cin >> choise;
	
		switch (choise) {
		case 1:
			cout << "������� ��������� ����������: "; cin >> EngSyma;
			cout << "������� �������� ����������: "; cin >> EngSymb;
			cout << (int)EngSyma << endl;
			cout << (int)EngSymb << endl;
			if (EngSyma > 64 && EngSyma < 91 && EngSymb > 90 && EngSymb < 123) {
				cout << " ������� ��������: " << fabs(int(EngSymb) - int(EngSyma)) << endl;
			}
			else {
				cout << "������ ������� �� ��������� " << endl;
			}
			break;
		case 2:
			cout << "������� ��������� �������: "; cin >> RusSyma;
			cout << "������� �������� �������: "; cin >> RusSymb;
			cout << (int)RusSyma << endl;
			cout << (int)RusSymb << endl;
			if (RusSyma >= 191 && RusSyma <= 224 && RusSymb >= 223 && RusSymb <= 256) {
				cout << " ������� ��������: " << fabs(int(RusSyma) - int(RusSymb)) << endl;
			}
			else {
				cout << "������ ������� �� ��������� " << endl;
			}
			break;
		case 3:
			cout << "������� �����: "; cin >> chislo;
			cout << (int)chislo << endl;
			if (chislo >= 48 && chislo <= 57) {
				cout << "��� c = " << (int)chislo << endl;
			}
			else {
				cout << "������ ������� �� ��������� " << endl;;
			}
			break;
		case 4:
			cout << "Exit" << endl;
			return 0;
		}
	}
}
