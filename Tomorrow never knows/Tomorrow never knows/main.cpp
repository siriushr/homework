//
//  main.cpp
//  Tomorrow never knows
//
//  Created by 黄然 on 15/8/31.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

bool leap_year(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
        return true;
    else
        return false;
}

int p_or_r(int m) {
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        return 1;
    else if (m == 2)
        return 2;
    else
        return 0;
}

int main(int argc, const char * argv[]) {
    int y, m, d;
    scanf("%d-%d-%d", &y, &m, &d);
    bool leap = leap_year(y);
    int month = p_or_r(m);
    
    if (leap) {
        if (month == 1) {
            if (d < 31) {
                d++;
            } else if (m != 12) {
                d = 1;
                m++;
            } else {
                d = 1;
                m = 1;
                y++;
            }
        }
        else if (month == 0) {
            if (d < 30) {
                d++;
            } else {
                d = 1;
                m++;
            }
        }
        else {
            if (d < 29) {
                d++;
            } else {
                d = 1;
                m++;
            }
        }
    } else {
        if (month == 1) {
            if (d < 31) {
                d++;
            } else if (m != 12) {
                d = 1;
                m++;
            } else {
                d = 1;
                m = 1;
                y++;
            }
        }
        else if (month == 0) {
            if (d < 30) {
                d++;
            } else {
                d = 1;
                m++;
            }
        }
        else {
            if (d < 28) {
                d++;
            } else {
                d = 1;
                m++;
            }
        }
    }
    
    printf("%d-%02d-%02d\n", y, m, d);
    return 0;
}
