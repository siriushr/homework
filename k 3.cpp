#include <iostream>

using namespace std;

int main() {
	int m, k;
	cin >> m >> k;
	bool check = true;

	if (m % 19 != 0) 
		check = false;

	int cnt = 0, a = 0;
	while (m != 0) {
		a = m % 10;
		if (a == 3) {
			cnt ++;
		}
		m /= 10;
	}
	if (cnt != k) {
		check = false;
	}

	if (check)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;

	return 0;
}