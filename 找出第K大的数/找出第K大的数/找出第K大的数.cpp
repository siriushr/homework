//
//  main.cpp
//  找出第K大的数
//
//  Created by 黄然 on 15/8/1.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int test(int i, int k);

int main() {
    int n, k;
    cin >> n >> k;
    int num[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    
    for (int i = 0; i < n; i++) {
        int max = 0, maxIndex = 0;
        for (int j = 0; j < n; j++) {
            if (max < num[j]) {
                max = num[j];
                maxIndex = j;
            }
        }
        if (test(i, k)) {
            num[maxIndex] = 0;
        }
        else {
            cout << max << endl;
            break;
        }
    }
    return 0;
}

int test(int i, int k) {
    if (i < k - 1)
        return 1;
    else
        return 0;
}