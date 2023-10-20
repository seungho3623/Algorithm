#include <iostream>
 
using namespace std;
int main(int argc, char const *argv[]) {   
    auto T=0, a=0, b=0;
    cin >> T;
    for(auto i = 1; i <= T; i++){
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a+b << endl;
    }
    return 0;
}