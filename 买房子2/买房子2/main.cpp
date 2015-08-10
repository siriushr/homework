//
//  main.cpp
//  买房子2
//
//  Created by 黄然 on 15/8/10.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    double N, K;
    double saving = 0;
    double price = 200;
    
    while (cin >> N >> K) {
        for (int i = 1; i <= 20; i++) {
            saving = N * i;
            price = 200 * pow(1 + K / 100, i - 1);
            if (saving >= price) {
                cout << i << endl;
                break;
            }
        }
        
        if (saving < price)
            cout << "Impossible" << endl;
    }
    return 0;
}
