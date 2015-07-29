//
//  main.cpp
//  最大奇数与最小偶数的差的绝对值
//
//  Created by 黄然 on 15/7/28.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a[6], odd[6], even[6];
    int cntOdd = 0, cntEven = 0;
    int result;
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
    }
    
    //奇偶分组
    for (int i = 0; i < 6; i++) {
        if (a[i] % 2) {
            odd[cntOdd] = a[i];
            cntOdd++;
        } else {
            even[cntEven] = a[i];
            cntEven++;
        }
    }
    
    //奇数排序
    for (int i = 0; i < cntOdd - 1; i++) {
        for(int j = 1; j < cntOdd - i; j++) {
            if (odd[j] < odd[j - 1]) {
                int temp = odd[j];
                odd[j] = odd[j - 1];
                odd[j - 1] = temp;
            }
        }
    }
    
    //偶数排序
    for (int i = 0; i < cntEven - 1; i++) {
        for (int j = 1; j < cntEven - i; j++) {
            if (even[j] < even[j - 1]) {
                int temp = even[j];
                even[j] = even[j - 1];
                even[j - 1] = temp;
            }
        }
    }
    
    //计算结果
    result = odd[cntOdd-1] - even[0];
    if (result < 0)
        result = -result;
    cout << result << endl;
    return 0;
}
