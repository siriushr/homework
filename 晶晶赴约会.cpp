//
//  main.cpp
//  晶晶赴约会
//
//  Created by 黄然 on 15/7/28.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int date;
    cin >> date;
    if (date == 1 || date == 3 || date == 5) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
    return 0;
}