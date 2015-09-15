/*输入一串长度不超过500个符号的字符串，
输出在串中出现第2多的英语字母(大小写字母认为相同)
和次数（如果串中有其它符号，则忽略不考虑）。
如果有多个字母的次数都是第2多，
则按串中字母出现的顺序输出第1个。
例 ab&dcAab&c9defgb
这里，a 和 b都出现3次，c和d都出现2次，e、f 和 g 各出现1次，
其中的符号&和9均忽略不考虑。因此，出现第2多的应该是 c 和 d，
但是 d 开始出现的位置在 c 的前面，因此，输出为
D+d:2
(假定在字符串中，次数第2多的字母总存在)
*/


#include <iostream>
using namespace std;

int main() {
	char str[501], letter[26] = '\0';
	int times[26] = {0};

	cin >> str;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] < 64) {
			continue;   //遇到非字母的字符，则跳过
		} else {
			bool check = false;
			int j;
			for (j = 0; letter[j] != '\0'; j++) {
				if (str[i] == letter[j]) {
					check = true;
					break;
				} else {
					continue;
				}
			}

			if (check) {
				times[j]++;
			} else {
				letter[j] = str[i];
				times[j]++;
			}
		}
	}

	char max = 'a';
	int maxTime = 0, maxIndex = 0;
	for (int i = 0; letter[i] != '\0'; i++) {
		if (maxTime < times[i]) {
			maxTime = times[i];
			maxIndex = i;
			max = letter[i];
		}
	} 

	//干掉最大的那个
	times[maxIndex] = 0;

	//找到第二大的那个
	for (int i = 0; letter[i] != '\0'; j++) {
		if (maxTime < times[i]) {
			maxTime = times[i];
			maxIndex = i;
			max = letter[i];
		}
	}

	if (max > 'a') 
		max -= 32;

	cout << max << '+' << max + 32 << ':' << maxTime << endl;

	return 0;
}