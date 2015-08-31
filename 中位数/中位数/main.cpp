//
//  main.cpp
//  中位数
//
//  Created by 黄然 on 15/8/19.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    int num[15000];
    
    while (cin >> n) {
        if (n == 0) {
            break;
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> num[i];
            cnt++;              // cnt用来计数，数组中共有多少个数字
        }
        
        for (int i = 0; i < cnt - 1; i++) {
            for (int j = 1; j < cnt - i; j++) {
                if (num[j - 1] > num[j]) {
                    int temp = num[j];
                    num[j] = num[j - 1];
                    num[j - 1] = temp;
                }
            }
        }
        
        int midst = 0;
        if (cnt % 2) { //如果是奇数
            midst = num[(cnt - 1) / 2];
        } else {
            midst = (num[cnt / 2 - 1] + num[cnt / 2]) / 2;
        }
        
        cout << midst << endl;
    }
    return 0;
}
