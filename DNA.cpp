#include <iostream>

using namespace std;
int main() {
	int n;
	cin >> n;
	
	char dna[n][256];
	for (int i = 0; i < n; i++) {
		cin >> dna[i];
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; dna[i][j] != '\0'; j++) {
			switch (dna[i][j]) {
				case 'A': cout << 'T'; break;
				case 'T': cout << 'A'; break;
				case 'C': cout << 'G'; break;
				case 'G': cout << 'C'; break;
				default: break;
			}
		}
		cout << endl;
	}
	return 0;
}