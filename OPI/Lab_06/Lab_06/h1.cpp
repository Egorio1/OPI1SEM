#include<string>
#include<iostream>
using namespace std;
int engCode(std::string let1, std::string let2) {
	for (int i = 0; i < let1.length(); i++) {
		char a = let1[i];
		if (static_cast<int>(a) < 127 && static_cast<int>(a) < 127) {
			cout << "��� �����: " << a << " - " << static_cast<int>(a) << endl;
		}
		char b = let2[i];
		if (static_cast<int>(b) < 127 && static_cast<int>(b) < 127) {
			cout << "��� �����: " << b << " - " << static_cast<int>(b) << endl;
		}
		cout << b - a << endl;
	}

	return 0;
}