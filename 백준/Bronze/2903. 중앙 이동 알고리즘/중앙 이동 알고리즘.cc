#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {   
    int N;
    int dot = 2;
    cin >> N;
    
    while(N--){
        dot = (dot * 2) - 1;
    }
    cout << dot * dot;
    return 0;
}