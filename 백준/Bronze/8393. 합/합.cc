#include <iostream>
 
using namespace std;
int main(int argc, char const *argv[]) {   
    auto n = 0, sum = 0;
    cin >> n;
    for(auto i = 1; i <= n; i++){
        sum += i;
    }
    cout << sum << endl;
    return 0;
}