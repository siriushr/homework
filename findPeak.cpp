#include <iostream>

using namespace std;

int max_2(int a, int b) {
	if (a > b)
		return a;
	else 
		return b;
}

int max_3(int a, int b, int c) {
	int max = 0;
	
	if (a > b) {
		max = a;
	} else {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	
	return max;
}

int max_4(int a, int b, int c, int d) {
	int max = 0;
	
	if (a > b) {
		max = a;
	} else {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	if (max < d) {
		max = d;
	}
	
	return max;
}

int main() {
	int m, n;
	cin >> m >> n;
	int mt[m][n];
	for (int i = 0; i < m; i++) {
		for (int j =0; j < n; j++) {
			cin >> mt[i][j];
		}
	}
	
	int cnt = 0;
	int peak[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			
			int checkPeak = 1;
			
			if (i == 0) {
				if ( j == 0) {
					if (mt[i][j] < max_2(mt[i][j + 1], mt[i + 1][j])) {
						checkPeak = 0;
					}
				} else if (j == n - 1) {
					if (mt[i][j] < max_2(mt[i][j - 1], mt[i + 1][j])) {
						checkPeak = 0;
					}
				} else {
					if (mt[i][j] < max_3(mt[i][j - 1], mt[i][j + 1], mt[i + 1][j])) {
						checkPeak = 0;
					}
				}
			} else if (i == m - 1) {
				if (j == 0) {
					if (mt[i][j] < max_2(mt[i][j + 1], mt[i - 1][j])) {
						checkPeak = 0;
					}
				} else if (j == n - 1) {
					if (mt[i][j] < max_2(mt[i][j - 1], mt[i - 1][j])) {
						checkPeak = 0;
					}
				} else {
					if (mt[i][j] < max_3(mt[i][j - 1], mt[i][j + 1], mt[i - 1][j])) {
						checkPeak = 0;
					}
				}
			} else if (j == 0) {
				if (mt[i][j] < max_3(mt[i - 1][j], mt[i + 1][j], mt[i][j + 1])) {
					checkPeak = 0;
				}
			} else if (j == n - 1) {
				if (mt[i][j] < max_3(mt[i - 1][j], mt[i + 1][j], mt[i][j - 1])) {
					checkPeak = 0;
				}
			} else {
				if (mt[i][j] < max_4(mt[i - 1][j], mt[i + 1][j], mt[i][j - 1], mt[i][j + 1])) {
					checkPeak = 0;
				}
			}
			
			if (checkPeak == 1) {
				cout << i << ' ' << j << endl;
			}
		}
	}
	
	return 0;
}