//
//  main.cpp
//  矩阵交换行
//
//  Created by 黄然 on 15/8/18.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int swap(int matrix[5][5], int n, int m) {
    if (n > 4 || m > 4 || n < 0 || m < 0)
        return 0;
    else {
        int temp[5] = {0};
        for (int i = 0; i < 5; i++) {
            temp[i] = matrix[n][i];
            matrix[n][i] = matrix[m][i];
            matrix[m][i] = temp[i];
        }
        return 1;
    }
}


int main(int argc, const char * argv[]) {
    int matrix[5][5];
    int n, m;
    
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> matrix[i][j];
    cin >> n >> m;
    
    if ( swap(matrix, n, m) ) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++)
                cout << setw(4) << matrix[i][j];
            cout << endl;
        }
    } else
        cout << "error" << endl;
    return 0;
}

