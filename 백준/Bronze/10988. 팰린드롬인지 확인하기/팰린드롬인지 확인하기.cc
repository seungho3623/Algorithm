#include <bits/stdc++.h>
 
using namespace std;
int main(int argc, char const *argv[]) {   
    string s;
    cin >> s;
    
    for(auto i = 0; i < s.length() / 2; i++){
        if(s[i] != s[s.length() - i -1]){
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    return 0;
}