//
//  main.cpp
//  自除整数
//
//  Created by 黄然 on 15/8/5.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    
    for (int i = 10; i < n; i++) {
        int number = i;
        int digit = 0;
        
        while (number > 0) {
            digit += number % 10;
            number /= 10;
        }
        
        if (i % digit == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
