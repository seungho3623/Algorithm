#include <iostream>
 
using namespace std;
int main(int argc, char const *argv[]) {   
    auto x=0, y=0;
    cin >> x >> y;
    
    if(x > 0 && y > 0){
        cout << 1 << endl;
    }else if(x < 0 && y > 0){
        cout << 2 << endl;
    }else if(x < 0 && y < 0){
        cout << 3 << endl;
    }else{
        cout << 4 << endl;
    }
    
    return 0;
}