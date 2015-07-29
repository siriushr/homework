//
//  main.cpp
//  大象喝水
//
//  Created by 黄然 on 15/7/28.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;
#define PI 3.14159

int main(int argc, const char * argv[]) {
    int h, r;
    double V;
    int bucket;
    cin >> h >> r;
    V = (double)PI * r * r * h / 1000;
    bucket = 20 / V;
    if (bucket * V < 20)
        bucket += 1;
    cout << bucket << endl;
    return 0;
}
