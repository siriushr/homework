//
//  main.cpp
//  人民币支付
//
//  Created by 黄然 on 15/8/1.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int r, money[6] = {100, 50, 20, 10, 5, 1};
    cin >> r;
    int shang;
    
    for (int i = 0; i < 5; i++) {
        shang = r / money[i];
        r %= money[i];
        cout << shang << endl;
    } //输出100，50，20，10，5元的张数
    
    cout << r << endl;  // 输出1元的张数
    
    return 0;
}