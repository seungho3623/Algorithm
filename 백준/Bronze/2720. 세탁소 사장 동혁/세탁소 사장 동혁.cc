#include <bits/stdc++.h>
#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

using namespace std;
int main(int argc, char const *argv[]) {   
    int T, C;
    cin >> T;
    for(auto i = 0; i < T; i++){
        cin >> C;
        cout << (C / QUARTER) << " ";
        cout << (C % QUARTER / DIME) << " ";
        cout << (C % QUARTER % DIME / NICKEL) << " ";
        cout << (C % QUARTER % DIME % NICKEL / PENNY) << endl;
    }
    
    return 0;
}