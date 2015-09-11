#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;
    int line = 0;
    char word[41], c;
    
    for (int i = 0; i < n; i++) {
        int j;
        
        
        if (line + j <= 80 && line != 0) {
            cout << ' ' << word;
            line += j;
        } else if (line + j <= 8) {
            cout << word;
            line += j;
        } else {
            cout << endl << word;
            line = j;
        }
    }
    return 0;
}