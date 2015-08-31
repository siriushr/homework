//
//  main.cpp
//  细菌实验分组
//
//  Created by 黄然 on 15/8/31.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n; // n为细菌的数量
    // id记录细菌的编号, rate记录细菌的繁殖率，第i个细菌对应id[i]和rate[i]
    int id[100];
    double rate[100];
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int initial, final;
        cin >> id[i] >> initial >> final;
        rate[i] = (double)final / initial;
    }
    
    // 对整个细菌排序
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (rate[j + 1] > rate[j])
            {
                int tmpId = id[j];
                id[j] = id[j + 1];
                id[j + 1] = tmpId;
                double tmpRate = rate[j];
                rate[j] = rate[j + 1];
                rate[j + 1] = tmpRate;
            }
        }
    }
    
    // 记录最大的差
    double maxDiff = 0;
    // 和最大差的下标
    int maxDiffIndex = 0;
    
    for (int i = 0; i < n - 1; i++)
    {
        double diff = rate[i] - rate[i + 1];
        if (maxDiff < diff) {
            maxDiff = diff;
            maxDiffIndex = i;
        }
    }
    
    //输出繁殖率较大的那组细菌
    cout << maxDiffIndex + 1 << endl;
    
    for (int i = maxDiffIndex; i >= 0; i--)
        cout << id[i] << endl;
    
    //输出繁殖率较小的那组细菌
    cout << n - maxDiffIndex - 1 << endl;
    
    for (int i = n - 1; i >= maxDiffIndex + 1; i--) 
        cout << id[i] << endl;
    return 0;
}
