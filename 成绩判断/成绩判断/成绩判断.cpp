
//
//  main.cpp
//  成绩判断
//
//  Created by 黄然 on 15/8/1.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n;
    if (n >= 95 && n <= 100)
        m = 1;
    else if (n >= 90)
        m = 2;
    else if (n >= 85)
        m = 3;
    else if (n >= 80)
        m = 4;
    else if (n >= 70)
        m = 5;
    else if (n >= 60)
        m = 6;
    else
        m = 7;
    
    cout << m << endl;
    return 0;
}
