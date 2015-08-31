//
//  main.cpp
//  校门外的树
//
//  Created by 黄然 on 15/8/19.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int l, m;
    cin >> l >> m;
    int tree[l + 1];
    for (int i = 0; i < l + 1; i++) {
        tree[i] = 1;
    } // 1代表树，0代表地铁
    
    int fore, back;
    for (int i = 0; i < m; i++) {  // 总共循环m次，因为有m组数据
        cin >> fore >> back;
        for (int j = fore; j <= back; j++) {
            tree[j] = 0;
        } // 把修地铁部分的树变为0
    }
    
    int cnt = 0;
    for (int i = 0; i < l + 1; i++) {
        if (tree[i])
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
