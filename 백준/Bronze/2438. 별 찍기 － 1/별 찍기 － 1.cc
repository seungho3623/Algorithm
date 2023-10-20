#include <iostream>
 
using namespace std;
int main(int argc, char const *argv[]) {   
    auto N=0;
    cin >> N;
    for(auto i = 1; i <= N; i++){
        for(auto j = 1; j <= i; j++){
             cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}

