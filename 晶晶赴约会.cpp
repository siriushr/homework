#include <iostream>
using namespace std;

int main() {
	int date = 0;
	cin >> date;
	if (date == 1 || date == 3 || date == 5) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
	}
	return 0;
}