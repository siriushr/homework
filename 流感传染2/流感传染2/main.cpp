//
//  main.cpp
//  流感传染2
//
//  Created by 黄然 on 15/8/31.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n;
    char room[n][n];
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> room[i][j];
    
    cin >> m;
    
    for (int k = 1; k < m; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (room[i][j] == '@') {
                    if (i - 1 >= 0 && room[i - 1][j] == '.')
                        room[i - 1][j] = '*';
                    if (i + 1 < n && room[i + 1][j] == '.')
                        room[i + 1][j] = '*';
                    if (j - 1 >= 0 && room[i][j - 1] == '.')
                        room[i][j - 1] = '*';
                    if (j + 1 < n && room[i][j + 1] == '.')
                        room[i][j + 1] = '*';
                }
            }
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (room[i][j] == '*')
                    room[i][j] = '@';
    }
    
    int num = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (room[i][j] == '@')
                num++;
    
    cout << num << endl;
    return 0;
}
