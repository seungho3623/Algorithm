#include <iostream>
 
using namespace std;
 
int main(int argc, char const *argv[]) {
	int A, B;
 
	while (true) {
		cin >> A >> B;
        if(A == 0 && B == 0)  break; 
        else cout << A + B << "\n";
	}
 
	return 0;
}