#include <string>
#include <iostream>
using namespace std;
int numCode(string let1) {
    for (int i = 0; i < let1.length(); i++) {
        char c = let1[i];
        if (static_cast<int>(c) >= 48 && static_cast<int>(c) <= 57) {
            cout << "��� ����� " << c << " - " << static_cast<int>(c) << endl;
        }
        else {
            cout << "������ ������ �����������!" << endl;
        }
    }
    return 0;
}