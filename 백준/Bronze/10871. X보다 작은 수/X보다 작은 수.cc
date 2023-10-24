#include <iostream>
 
using namespace std;
 
int main(int argc, char const *argv[]) {
	int N, X;
	cin >> N >> X;
 
	int val;
	for (int i = 0; i < N; i++) {
		cin >> val;
		// 입력을 받은 값이 X보다 작을 경우 출력
		if (val < X) {
			cout << val << " ";
		}
	}
 
	return 0;
}