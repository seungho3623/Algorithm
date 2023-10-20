#include <iostream>
 
using namespace std;
int main(int argc, char const *argv[]) {   
    auto N = 0;
    cin >> N;
    for(auto i = 1; i < 10; i++){
        cout << N << " * " << i << " = " << N*i << endl; 
    }
    return 0;
}