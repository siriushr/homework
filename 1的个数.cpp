//
//  main.cpp
//  1的个数
//
//  Created by 黄然 on 15/7/28.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    // 输入所有数据
    for (int i = 0; i < N; i++) {
        int cnt = 0, digit, number;
        number = a[i];
        while(number > 0) {
            digit = number % 2;
            if (digit == 1)
                cnt++;
            number /= 2;
        }
        cout << cnt << endl;
    }
    return 0;
}

