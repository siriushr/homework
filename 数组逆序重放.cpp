//
//  main.cpp
//  数组逆序重放
//
//  Created by 黄然 on 15/7/28.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        b[i] = a[n - i - 1];
    }
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
