//
//  main.cpp
//  找和为K的两个元素
//
//  Created by 黄然 on 15/8/5.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, k;
    cin >> n >> k;
    int num[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    
    bool result = false;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 1; j < n; j++) {
            if (num[i] + num[j] == k) {
                result = true;
                break;
            }
        }
        if (result)
            break;
    }
    
    if (result)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    
    return 0;
}
