//
//  c.cpp
//  角谷猜想
//
//  Created by 黄然 on 15/9/6.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    while (n != 1) {
        if (n % 2 == 0) {
            printf("%d/2=", n);
            n /= 2;
        } else {
            printf("%d*3+1=", n);
            n = n * 3 + 1;
        }
        printf("%d\n", n);
    }
    
    printf("End\n");
    return 0;
}