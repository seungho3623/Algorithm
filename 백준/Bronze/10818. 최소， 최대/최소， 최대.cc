#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, tmp;
    int MAX = -1000000;
    int MIN = 1000000;
    
    cin >> N;
    
    for(auto i = 0; i < N; i++){
        cin >> tmp;
        MAX = max(MAX, tmp);
        MIN = min(MIN, tmp);
    }
    cout << MIN << " " << MAX;
    return 0;
}