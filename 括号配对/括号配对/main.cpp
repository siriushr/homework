//
//  main.cpp
//  括号配对
//
//  Created by 黄然 on 15/9/5.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

bool b;
int n;
int f(char str[], int s) {
    if (strlen(str) == s)
    {
        return (b = true, -1);
    }
    else
    {
        if (str[s] == '(')
        {
            n = f(str, s + 1);
            
            if (b == false)
            {
                return (b = false, n);
            }
            else
            {
                if (str[n] == ')')
                    return f(str, n + 1);
                else
                    return (b = false, n);
            }
        }
        else
        {
            return (b = true, s);
        }
    }
}

int main(int argc, const char * argv[]) {
    char str[100];
    cin >> str;
    n = f(str, 0);
    if (b == true && n == -1)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
