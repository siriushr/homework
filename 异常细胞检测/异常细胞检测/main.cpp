//
//  main.cpp
//  异常细胞检测
//
//  Created by 黄然 on 15/8/19.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int ct[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> ct[i][j];
        }
    }
    
    int cnt = 0;
    int shang, xia, zuo, you;
    // 不计算边缘细胞
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            shang = ct[i - 1][j] - ct[i][j];
            xia = ct[i + 1][j] - ct[i][j];
            zuo = ct[i][j - 1] - ct[i][j];
            you = ct[i][j + 1] - ct[i][j];
            if (shang >= 50 && xia >= 50 && zuo >= 50 && you >= 50)
                cnt++;
        }
    }
    
    cout << cnt << endl;
    return 0;
}
