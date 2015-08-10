//
//  main.cpp
//  数字求和
//
//  Created by 黄然 on 15/8/5.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, num[5];
    cin >> a;
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
    }
    
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        if (a > num[i])
            sum += num[i];
    }
    cout << sum << endl;
    return 0;
}
