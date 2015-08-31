//
//  main.cpp
//  求字母的个数
//
//  Created by 黄然 on 15/8/18.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, const char * argv[]) {
    char s[80];
    cin.get(s, 80);
    int f[5] = {0};
    
    for (int i = 0; i < 80; i++) {
        switch (s[i]) {
            case 'a': f[0]++; break;
            case 'e': f[1]++; break;
            case 'i': f[2]++; break;
            case 'o': f[3]++; break;
            case 'u': f[4]++; break;
        }
    }
    
    for (int i = 0; i < 5; i++) {
        cout << f[i];
        cout << ' ';
    }
    cout << endl;
    return 0;
}
