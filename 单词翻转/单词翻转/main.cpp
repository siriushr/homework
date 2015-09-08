//
//  main.cpp
//  单词翻转
//
//  Created by 黄然 on 15/9/5.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

void inv(char temp[], int j) {
    for (; j >= 0; j--)
        cout << temp[j];
}

int main(int argc, const char * argv[]) {
    char str[501], temp[501];
    cin.get(str, 501);
    
    int i = 0;
    
    while (str[i] != '\0') {
       
        int j = 0;
        
        for (; str[i] != ' ' && str[i] != '\0'; i++) {
            temp[j] = str[i];
            j++;
        }
        temp[j] = '\0';
        
        inv(temp, j - 1);
        
        for (; str[i] == ' '; i++) {
            cout << ' ';
        }
    }
    
    return 0;
}
