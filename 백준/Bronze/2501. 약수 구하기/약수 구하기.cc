#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> factor;
    int cnt, n, k;

    cin >> n >> k;

    for(int i = 1; i < n+1; i++){
        if(n % i == 0){
            factor.push_back(i);
            cnt++;
        }
    }

    if(cnt < k) cout << '0';
    else cout << factor[k-1];
    
    return 0;
}