//
//  main.cpp
//  骑车与走路
//
//  Created by 黄然 on 15/8/5.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int length[n];
    for (int i = 0; i < n; i++) {
        cin >> length[i];
    }
    
    double bike = 0, walk = 0;
    const int unlock = 27, lock = 23;
    const float v_bike = 3.0, v_walk = 1.2;
    for (int i = 0; i < n; i++) {
        bike = lock + unlock + length[i] / v_bike;
        walk = length[i] / v_walk;
        
        if (bike > walk)
            cout << "Walk" << endl;
        else if (bike < walk)
            cout << "Bike" << endl;
        else
            cout << "All" << endl;
    }
    return 0;
}
