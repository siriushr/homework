//
//  main.cpp
//  二维数组右上左下遍历
//
//  Created by 黄然 on 15/9/11.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include<stdio.h>

int main()
{
    int a[100][100];
    int i, j, m, n, p;
    
    scanf("%d %d", &m, &n);
    
    for(i = 0; i < m; i++) {    //输入数组
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(p = 0; p < m + n - 1; p++)   //p代表的是斜排的序数，斜排一共有m+n-1排，这里从第一排开始一次输出
    {
        for(i = 0; i <= p; i++)
        {
            if(i < m && p - i < n)      //i+j = p
            {
                printf("%d\n", a[i][p-i]);
            }
            else
                continue;
        }
    }
    
    return 0;
}