//
//  main.cpp
//  最远距离
//
//  Created by 黄然 on 15/8/26.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    double dots[n][2];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> dots[i][j];
        }
    } //输入数据
    
    int amount;
    amount = n * (n - 1) / 2;
    double len[amount];
    int k = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            len[k] = sqrt((dots[i][0] - dots[j][0]) * (dots[i][0] - dots[j][0]) + (dots[i][1] - dots[j][1]) * (dots[i][1] - dots[j][1]));
            k++;
        }
    } // 计算出全部长度
    
    double max = 0;
    for (int i = 0; i < amount; i++) {
        if (max < len[i])
            max = len[i];
    } // 找到最大长度
    
    cout << fixed << setprecision(4) << max << endl;
    return 0;
}
