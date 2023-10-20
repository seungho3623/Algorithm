#include <iostream>
 
using namespace std;
int main(int argc, char const *argv[]) {   
    auto a=0, b=0;
    cin >> a >> b;
    cout << a*(b%10) << endl;
    cout << a*(b/10%10)<< endl;
    cout << a*(b/100) << endl;
    cout << a*b << endl;
    return 0;
}