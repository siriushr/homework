//
//  main.cpp
//  最长单词2
//
//  Created by 黄然 on 15/8/18.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char sentence[500] = {0};
    cin.get(sentence, 500);
    
    int length[500] = {0};
    int j = 0;
    
    for (int i = 0; i < 500; i++)
        if (sentence[i] != ' ' && sentence[i] != '.' && sentence[i] != '\0')
            length[j]++;
        else if (sentence[i] == '\0' || sentence[i] == '.')
            break;
        else
            j++;
    // 统计每个单词的长度，并存储到数组length中
    
    int max = 0, maxIndex = 0;
    for (int i = 0; i <= j; i++)
        if (max < length[i]) {
            max = length[i];
            maxIndex = i;
        }
    // 找到最长的单词maxIndex
    
    int index = 0;
    for (int i = 0; i < maxIndex; i++)
        index += length[i] + 1;
    // 找到最长单词的第一个字母在sentence中的下标
    
    for (int i = index; i < index + max; i++)
        cout << sentence[i];
    
    cout << endl;
    return 0;
}
