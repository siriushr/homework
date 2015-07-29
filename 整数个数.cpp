//
//  整数个数.cpp
//  整数的个数
//
//  Created by 黄然 on 15/7/28.
//  Copyright (c) 2015年 黄然. All rights reserved.
//


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int k, a[100];
    int x = 0, y = 0, z = 0;
    cin >> k; //输入k
    for (int i = 0; i < k; i++) {
        cin >> a[i];
    } //输入数组
    for (int i = 0; i < k; i++) {
        if (a[i] == 1)
            x++;
        else if (a[i] == 5)
            y++;
        else if (a[i] == 10)
            z++;
    }
    cout << x << endl << y << endl << z << endl;
    return 0;
}
