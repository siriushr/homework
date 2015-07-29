//
//  main.cpp
//  苹果和虫子
//
//  Created by 黄然 on 15/7/28.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, x, y;
    int eaten, left;
    cin >> n >> x >> y;
    eaten = y / x;
    if (y % x != 0)
        eaten += 1;
    left = n - eaten;
    if (left < 0)
        left = 0;
    cout << left << endl;
    return 0;
}
