//
//  main.cpp
//  忽略大小写比较字符串大小
//
//  Created by 黄然 on 15/8/18.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    char str_1[80] = {0};
    char str_2[80] = {0};
    cin.getline(str_1, 80);
    cin.getline(str_2, 80);
    
    for (int i = 0; i < 80; i++) {
        if (str_1[i] >= 65 && str_1[i] <= 90)
            str_1[i] += 32;
        if (str_2[i] >= 65 && str_2[i] <= 90)
            str_2[i] += 32;
    }
    
    int n = strcmp(str_1, str_2);
    if (n > 0)
        cout << '>' << endl;
    else if (n == 0)
        cout << '=' << endl;
    else if (n < 0)
        cout << '<' << endl;
    
    return 0;
}
