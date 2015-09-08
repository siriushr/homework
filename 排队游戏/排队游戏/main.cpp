//
//  main.cpp
//  排队游戏
//
//  Created by 黄然 on 15/9/6.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char line[101];
    cin.getline(line, 100);    // 输入队列
    char m, f = '\0';
    m = line[0];     // 提取男孩的字符
    
    for ( int i = 1; i < 100; i++)    // 提取女孩的字符
        if (m != line[i]) {
            f = line[i];
            break;
        }
    
    for (int i = 0; i < 100; i++) {
        if (line[i] == m) {
            for (int j = i + 1; ; j++) {
                if (line[j] == '.')
                    continue;
                if (line[j] == m)
                    break;
                if (line[j] == f) {
                    line[i] = '.';
                    line[j] = '.';
                    cout << i << ' ' << j << endl;
                    i = -1;
                    break;
                }
            }
        }
    }
    
    return 0;
}
