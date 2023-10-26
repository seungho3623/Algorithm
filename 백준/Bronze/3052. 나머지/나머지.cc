#include <iostream>
 
using namespace std;
 
int main(int argc, const char * argv[]) {
	bool count[42] = {};	
	
	short value;
	for(auto i = 0; i < 10; i++) {
		cin >> value;
		count[value % 42] = true;	
	}
 
	short result = 0;
	for(auto chk : count) {
		if(chk) {		
			result++;
		}
	}
	cout << result;
 
	return 0;
 
 
}