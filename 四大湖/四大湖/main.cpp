//
//  main.cpp
//  四大湖
//
//  Created by 黄然 on 15/8/31.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int A, B, C, D;
    int i = 0, j = 0, k = 0, l = 0; //鄱阳湖，洞庭湖，太湖，洪泽湖
    
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4; j++) {
            if (i != j) {
                for (k = 1; k <= 4; k++) {
                    if (k != i && k != j) {
                        l = 10 - i - j - k;
                        A = (i == 3) + (j == 1) + (l == 4);
                        B = (i == 2) + (j == 4) + (k == 3) + (l == 1);
                        C = (j == 3) + (l == 4);
                        D = (i == 1) + (j == 3) + (k == 4) + (l == 2);
                        
                        if (A == 1 && B == 1 && C == 1 && D == 1) {
                            cout << i << endl;
                            cout << j << endl;
                            cout << k << endl;
                            cout << l << endl;

                        }
                    }
                }
            }
        }
    }
    return 0;
}
