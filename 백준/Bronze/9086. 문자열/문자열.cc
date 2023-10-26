#include <bits/stdc++.h>
 
using namespace std;
int main(int argc, char const *argv[]) {   
    int T;
    string arr;
    
    cin >> T;
    
    while(T--){
        cin >> arr;
        cout << arr[0] << arr[arr.length()-1] << endl;
    }
    return 0;
}
