//
//  main.cpp
//  发票统计
//
//  Created by 黄然 on 15/8/31.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    int i,j,id,count;
    char bill;
    double money = 0.00;
    double person[3]={0.00,0.00,0.00};
    double type[3]={0.00,0.00,0.00};
    
    for(i=0;i<3;i++)
    {
        cin >> id >> count;
        
        for(j=0;j<count;j++)
        {
            cin >> bill >> money;
            
            if(id == 1)
                person[0] += money;
            if(id == 2)
                person[1] += money;
            if(id == 3)
                person[2] += money;
            if(bill == 'A')
                type[0] += money;
            if(bill == 'B')
                type[1] += money;
            if(bill == 'C')
                type[2] += money;
        }
    }
    
    cout <<setprecision(2) << fixed; // 格式控制
    cout << '1' << " " << person[0] << endl;
    cout << '2' << " " << person[1] << endl;
    cout << '3' << " " << person[2] << endl;
    cout << 'A' << " " << type[0] << endl;
    cout << 'B' << " " << type[1] << endl;
    cout << 'C' << " " << type[2] << endl;
    return 0;
}
