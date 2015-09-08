//
//  main.cpp
//  汉诺塔问题
//
//  Created by 黄然 on 15/9/4.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

void move(int m, char x, char y, char z) {
    if (m == 1)
        cout << "把一个盘子从" << x << "移动到" << z << endl;
    else {
        move(m - 1, x, z, y);
        cout << "把一个盘子从" << x << "移动到" << z << endl;
        move(m - 1, y, x, z);
    }
}

int main(int argc, const char * argv[]) {
    int n;
    cout << "请输入盘数n=：";
    cin >> n;
    cout << "从三根柱子上移" << n << "只盘子的步骤为：" << endl;
    move(n, 'A', 'B', 'C');
    return 0;
}
