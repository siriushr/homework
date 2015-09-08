//
//  main.cpp
//  递归
//
//  Created by 黄然 on 15/9/3.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int recur() {
        char c;
        c = cin.get();
        if (c != '\n')
            recur();
        cout << c;
        return 0;
    }
    
    int main() {
        recur();
        return 0;
    }
