//
//  main.cpp
//  放苹果
//
//  Created by 黄然 on 15/9/4.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int count(int m, int n) {
    if (m <= 1|| n <= 0)
        return 1;
    if (m < n)
        return count(m, m);
    else
        return count(m, n - 1) + count(m - n, n);
}

int main(int argc, const char * argv[]) {
    int apple, plate;
    cin >> apple >> plate;
    cout << count(apple, plate) << endl;
    return 0;
}
