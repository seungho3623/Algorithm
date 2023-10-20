#include <iostream>
 
using namespace std;
 
int main(int argc, char const *argv[]) {
    int y;
 
    cin >> y;
 
    if (y % 4 == 0) {
        if (y % 400 == 0 || y % 100 != 0) { 
            cout << 1;
        } 
        else {
            cout << 0;
        }
    } else {
        cout << 0;
    }
 
    return 0;
}