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
		cout << "1 - ���������� , 2 - �������, 3 - �����, 4 - ����� " << endl;
		cin >> k;
		switch (k) {
		case 1:
			cout << "������� ��������� ���������� "; cin >> a;
			cout << "������� �������� ����������  "; cin >> b;
			res = engCode(a, b);
			if (res != 0) {
				cout << "������� ��������: " << res << endl;;
			}
			else {
				cout << "������ ������� �� ���������!" << endl;;
			}
			break;
		case 2:
			cout << "������� ��������� �������: "; cin >> e;
			cout << "������� �������� �������: "; cin >> d;
			cout << (int)e << endl;
			cout << (int)d << endl;
			res = rusCode(e, d);
			if (res != 0) {
				cout << "������� ��������: " << res << endl;
			}
			else {
				cout << "������ ������� �� ���������!! " << endl;
			}
			break;

		case 3:
			cout << "������� �����: "; cin >> c;

			res = numCode(c);
			break;
		case 4:
			cout << "Exit";
			return 0;
		}
	}
}
