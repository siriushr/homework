//
//  main.cpp
//  student_info_processing
//
//  Created by 黄然 on 15/10/14.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    class student {
    private:
        char name[100], id[100];
        int age, gd1, gd2, gd3, gd4;
        int average, c;
        
    public:
        void input() {
            cin.getline(name, 100, ',');
            cin >> age;
            c = getchar();
            cin.getline(id, 100, ',');
            cin >> gd1 >> c >> gd2 >> c >> gd3 >> c >> gd4;
        }
        
        void getAverage() {
            average = (gd1 + gd2 + gd3 + gd4) / 4;
        }
        
        void output() {
            cout << name << ',' << age << ',' << id << ',' << average << endl;
        }
    };
    
    student stu;
    stu.input();
    stu.getAverage();
    stu.output();

    return 0;
}
