#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char word[n][40];
    int wordLen[n];
    
    //将单词输入数组word的每一行，并计算得到每个单词的长度
    for (int i = 0; i < n; i++) {
        cin >> word[i];
        wordLen[i] = (int)strlen(word[i]);
    }
    
    //输出第一个单词
    int length = wordLen[0];
    cout << word[0];
    
    for (int i = 1; i < n; i++) {
        //如果单词和前面的空格加起来小于80，则输出空格及单词
        if (length + 1 + wordLen[i] <= 80) {
            cout << ' ' << word[i];
            length += 1 + wordLen[i];
        } else {
            //否则，就换行并输出单词
            cout << endl << word[i];
            length = wordLen[i];
        }
    }
    
    cout << endl;
    return 0;
}
