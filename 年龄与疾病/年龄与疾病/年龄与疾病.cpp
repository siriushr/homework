//
//  main.cpp
//  年龄与疾病
//
//  Created by 黄然 on 15/8/1.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int age[n];
    for (int i = 0; i < n; i++) {
        cin >> age[i];
    }
    
    int age18 = 0, age19_35 = 0, age36_60 = 0, age60 = 0;
    for (int i = 0; i < n; i++) {
        if (age[i] <= 18)
            age18++;
        else if (age[i] <= 35)
            age19_35++;
        else if (age[i] <= 60)
            age36_60++;
        else
            age60++;
    }
    
    double rate18, rate19_35, rate36_60, rate60;
    rate18 = (double)age18 / n * 100;
    rate19_35 = (double)age19_35 / n * 100;
    rate36_60 = (double)age36_60 / n * 100;
    rate60 = (double)age60 / n * 100;
    
    cout << fixed << setprecision(2);
    cout << "1-18: " << rate18 << "%" << endl;
    cout << "19-35: " << rate19_35 << "%" << endl;
    cout << "36-60: " << rate36_60 << "%" << endl;
    cout << "60-: " << rate60 << "%" << endl;
    
    return 0;
}
