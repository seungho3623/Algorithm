#include <iostream>
 
using namespace std;
 
int main() {
	int maxValue = -1;	
	int maxValueIndex;
	int num;			
	for (int i = 0; i < 9; i++) {
		cin >> num;
		if (num > maxValue) {
			maxValue = num;
			maxValueIndex = i;
		}
	}
	cout << maxValue << "\n";
	cout << maxValueIndex + 1;
	return 0;
}