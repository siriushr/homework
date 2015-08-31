//
//  main.cpp
//  寻找下标
//
//  Created by 黄然 on 15/8/31.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    int a = -1;
    for (int i = 0; i < n; i++) {
        if (x[i] == i) {
            a = i;
            break;
        }
    }
    if (a == -1)
        cout << 'N' << endl;
    else
        cout << a << endl;
    return 0;
}
