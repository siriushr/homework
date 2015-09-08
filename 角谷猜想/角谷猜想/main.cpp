//
//  main.cpp
//  角谷猜想
//
//  Created by 黄然 on 15/9/6.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

void convert(int x) {
    int t = x;
    
    if (x == 1)
        cout << "End" << endl;
    else if (x % 2) {
        x = x * 3 + 1;
        cout << t << "*3+1=" << x << endl;
        convert(x);
    } else {
        x /= 2;
        cout << t << "/2=" << x << endl;
        convert(x);
    }
}

int main(int argc, const char * argv[]) {
    int x;
    cin >> x;
    convert(x);
    return 0;
}
