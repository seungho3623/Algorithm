#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    long long num = n;
    int len = 0;
    
    while(num > 0)
    {
        len++;
        num /= 10;
    }
    
    while(len > 0)
    {
        len--;
        answer.push_back(n % 10);
        n /= 10;
    }
    return answer;
}