#include <iostream>
using namespace std;
int student[31] = {0,};
int n;
int main() {
    for(auto i = 1; i <= 28; i++){
        cin >> n;
        student[n] = 1;
    }
    
    for(auto i = 1; i <= 30; i++){
        if(student[i] == 0) cout << i << endl;
    }
    
    return 0;
}