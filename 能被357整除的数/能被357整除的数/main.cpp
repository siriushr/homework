//
//  main.cpp
//  能被357整除的数
//
//  Created by 黄然 on 15/8/26.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num;
    while (cin >> num) {
        int three = 0, five = 0, seven = 0;

        three = num % 3;
        five = num % 5;
        seven = num % 7;
        if (three == 0 && five == 0 && seven == 0)
            cout << "3 5 7" << endl;
        else if (three == 0 && five == 0)
            cout << "3 5" << endl;
        else if (five == 0 && seven == 0)
            cout << "5 7" << endl;
        else if (three == 0 && seven == 0)
            cout << "3 7" << endl;
        else if (three == 0)
            cout << "3" << endl;
        else if (five == 0)
            cout << "5" << endl;
        else if (seven == 0)
            cout << "7" << endl;
        else
            cout << "n" << endl;
    }
    return 0;
}
