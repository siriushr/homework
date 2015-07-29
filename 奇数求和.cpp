#include <iostream>
using namespace std;

int main() {
	int m, n;
	int i, num = 0;
	cin >> m >> n; //输入m，n
	if (m % 2 == 0) {
		i = m + 1;
	} else {
	    i = m;
	} 
	//第一个加数
	for (; i <= n; i = i + 2) {
		num += i;
	}
	cout << num << endl;
	return 0;
}