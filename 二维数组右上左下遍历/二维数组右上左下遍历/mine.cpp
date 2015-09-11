#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;   //共有n组数据
    
    while (k != 0) {
        int m, n;
        cin >> m >> n;  //输入矩阵的行列数
        
        int a[m][n];
        for (int i = 0; i < m; i++)    //输入矩阵
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
    
        int i, j;
        for (int p = 0; p < m + n - 1; p++)
            for (i = 0; i <= p; i++) {
                j = p - i;
                if (i < m && j < n)
                    cout << a[i][j] << endl;
                else
                    continue;
            }
    
        
        k--;
    }
    return 0;
}
