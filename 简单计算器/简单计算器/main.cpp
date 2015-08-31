//
//  main.cpp
//  简单计算器
//
//  Created by 黄然 on 15/8/26.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    cin >> a >> b;
    char c;
    cin >> c;
    
    switch (c) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            if (b != 0)
                cout << a / b << endl;
            else
                cout << "Divided by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }
    return 0;
}
