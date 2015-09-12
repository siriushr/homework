#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;
int main() {
	int m;
	float a;
	cin >> m >> a;
	
	float patient[m][2];
	int cnt = 0;
	for (int i = 0; i < m; i++) {
			cin >> patient[i][0] >> patient[i][1];
			if (patient[i][1] >= a) {
				cnt++;
			}
	}
	
	if (cnt == 0) {
		cout << "None." << endl;
	} else {
		//遍历patient，找出大于a的病人，存进severe中
		float severe[cnt][2];
		int j = 0;
		for (int i = 0; i < m; i++) {
			if (patient[i][1] >= a) {
				severe[j][0] = patient[i][0];
				severe[j][1] = patient[i][1];
				j++;
			}
		}

		//给severe中的数据排序，按照病情程度降序排列
		for (int i = 0; i < cnt; i++) {
			for (int j = 1; j < cnt - i; j++) {
				float tmpId, tmpS;
				if (severe[j][1] > severe[j - 1][1]) {
					tmpId = severe[j][0];
					severe[j][0] = severe[j - 1][0];
					severe[j - 1][0] = tmpId;
					tmpS = severe[j][1];
					severe[j][1] = severe[j - 1][1];
					severe[j - 1][1] = tmpS;
				}
			}
		}
		
		for (int i = 0; i < cnt; i++) {
			
			printf("%03d ", (int)severe[i][0]);
			cout << setiosflags(ios::fixed) << setprecision(1) << severe[i][1];
			cout.unsetf(ios::fixed);
			cout << endl;
		}
	}
	return 0;
}