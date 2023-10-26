#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // n은 바구니 크기 정하기, m은 바꾸는 횟수
    int n, m;

    cin >> n >> m;
    int *arr = new int[n + 1];

    // 바구니 초기화 하기
    for (int i = 1; i <= n; i++){
        arr[i] = i; // 공의 번호와 바구니 번호를 동일하게 만들기
    }

    // 공 바꾸기
    for (int i = 0; i < m; i++){
        int num1, num2;
        cin >> num1 >> num2;

        reverse(arr + num1, arr + num2 + 1);
    }

    // 바구니 출력하기
    for (int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}