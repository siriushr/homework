//
//  main.cpp
//  判断闰年
//
//  Created by 黄然 on 15/8/26.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int year;
    bool leap;
    cin >> year;
    
    if (year % 400 == 0) {
        leap = true;
    } else if (year % 100 != 0 && year % 4 == 0) {
        leap = true;
    } else {
        leap = false;
    }
    
    if (leap)
        cout << "Y" << endl;
    else
        cout << "N" << endl;
    return 0;
}
