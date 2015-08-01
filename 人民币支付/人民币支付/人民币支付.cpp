//
//  main.cpp
//  人民币支付
//
//  Created by 黄然 on 15/8/1.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int sum, money = 100;
    cin >> sum;
    int r, shang;
    
    shang = sum / money;
    r = sum % money;
    cout << shang << endl;
    money = 50;
    
    shang = r / money;
    r = r % money;
    cout << shang << endl;
    money = 20;
    
    shang  = r / money;
    r = r % money;
    cout << shang << endl;
    money = 10;
    
    shang = r / money;
    r = r % money;
    cout << shang << endl;
    money = 5;
    
    shang = r / money;
    r = r % money;
    cout << shang << endl;
    cout << r << endl;
    return 0;
}
