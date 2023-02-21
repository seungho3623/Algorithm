#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int cnt = 0;
    
    for(int i : arr)
    {
        if(i % divisor == 0) 
        {
            cnt++;
            answer.push_back(i);
        }
    }
    if(cnt) sort(answer.begin(), answer.end());
    else answer.push_back(-1);
    return answer;
}