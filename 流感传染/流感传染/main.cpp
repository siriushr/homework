//
//  main.cpp
//  流感传染
//
//  Created by 黄然 on 15/8/31.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,i,j,k,sum = 0;
    cin >> n;
    
    char room[100][100];
    
    // 读入
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin >> room[i][j];
    
    int m;
    cin >> m;
    
    for(k=2;k<=m;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(room[i][j] == '@')
                {
                    // 左边住着健康的人,标记为*
                    if(i - 1 >= 0 && room[i - 1][j] =='.')
                        room[i - 1][j] = '*';
                    // 右边住着健康的人,标记为*
                    if(i + 1 < n && room[i + 1][j] == '.')
                        room[i + 1][j] = '*';
                    // 上边住着健康的人,标记为*
                    if(j - 1 >= 0 && room[i][j - 1] =='.')
                        room[i][j - 1] = '*';
                    // 下边住着健康的人,标记为*
                    if(j + 1 < n && room[i][j + 1] == '.')
                        room[i][j + 1] = '*';        
                }   
            }
        }
        /*将健康标志替换成感染标志 */
        for(i = 0; i < n; ++i)
            for(j = 0; j < n; ++j)
                if(room[i][j] == '*')
                    room[i][j] = '@';     
    }
    
    for(i=0;i<n;++i)
        for(j=0;j<n;++j)
            if(room[i][j] == '@')
                sum++;
    
    cout << sum << endl;
    
    return 0;
}
