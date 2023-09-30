#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer(arr.size());  // answer 벡터를 arr와 동일한 크기로 초기화
    
    for(auto i = 0; i < arr.size(); i++)
    {
        if((arr[i] % 2 != 0) && (arr[i] < 50)) 
            answer[i] = arr[i] * 2;
        else if((arr[i] % 2 == 0) && (arr[i] >= 50)) 
            answer[i] = arr[i] / 2;
        else 
            answer[i] = arr[i];
        
    }
    return answer;
}