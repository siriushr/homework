#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int d[n][2];
	for (int i = 0; i < n; i++) 
		cin >> d[n][0] >> d[n][1];

	int x[n][2];
	int k = 0;
	for (int i = 0; i < n; i++) {
		bool check = true;
		for (int j = 0; j < n; j++) {
			if (i == j) {
				continue;
			} else {
				if (d[i][0] <= d[j][0] && d[i][1] <= d[j][1]) {
					check = false;
				}
			}
		}

		if (check) {
			x[k][0] = d[i][0];
			x[k][1] = d[i][1];
			k++;
		}
	}

	k--;

	for (int i = 0; i < k - 1; i++) {
		for (int j = 1; j < k - i; j++) {
			if (x[j][0] < x[j - 1][0]) {
				int tmp0 = x[j][0];
				x[j][0] = x[j - 1][0];
				x[j - 1][0] = tmp0;

				int tmp1 = x[j][1];
				x[j][1] = x[j - 1][1];
				x[j - 1][1] = tmp1;
			}
		}
	}

	cout << '(' << x[0][0] << ',' << x[0][1] << ')';
	for (int i = 1; i <= k; i++) {
		cout <<',' << '(' << x[i][0] << ',' << x[i][1] << ')';
	}

	return 0;
}