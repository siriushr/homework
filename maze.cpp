#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	char m[n][m];
	int *s, *t;
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++) {
			cin.get(m[i][j]);
			if (m[i][j] == 'S') {
				s = &m[i][j];
			}
			if (m[i][j] == 'T') {
				t = &m[i][j];
			}
		}


}