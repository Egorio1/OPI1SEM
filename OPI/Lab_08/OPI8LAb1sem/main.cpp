#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	int param1 = 5;
	for (int i = 0; i < 5; i++) {
		int param2 = param1 + i;
		int result_getSum = getSum(param1, param2);
		cout << "i= " << i << ' ';
		cout << "getSum(" << param1 << "," << param2 << ") = " << result_getSum << endl;
	}
	int result_getMul = getMul(2, 3);
	cout << result_getMul << endl;
	system("pause");
}