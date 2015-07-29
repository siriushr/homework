//
//  main.cpp
//  分离整数的各个数位
//
//  Created by 黄然 on 15/7/28.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int number, digit[3];
    cin >> number;
    for (int i = 0; i < 3; i++) {
        digit[i] = number % 10;
        number /= 10;
    }
    for (int i = 2; i >= 0; i--) {
        cout << digit[i] << endl;
    }
    return 0;
}
