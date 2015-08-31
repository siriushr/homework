//
//  main.cpp
//  字符串插入
//
//  Created by 黄然 on 15/8/26.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char str[11];
    char substr[4];
    
    while (cin.getline(str, 11, ' ')) {
        cin.getline(substr, 4);
        char max = 0;
        int maxIndex = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            if (max < str[i]) {
                maxIndex = i;
                max = str[i];
            }
        }
        char a[14];
        int index = 0;
        for (int i = 0; i <= maxIndex; i++) {
            a[i] = str[i];
        }
        for (int i = 0; i < 3; i++) {
            a[maxIndex + i + 1] = substr[i];
        }
        for (int i = maxIndex + 1; str[i] != '\0'; i++) {
            a[i + 3] = str[i];
            index = i + 3;
        }
        index++;
        a[index] = '\0';
        cout << a << endl;
    }
    return 0;
}
