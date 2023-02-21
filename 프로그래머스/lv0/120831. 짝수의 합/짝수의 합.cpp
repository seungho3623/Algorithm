#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    if(n == 1)
        return answer;
    
    answer = (n / 2) * (n / 2 + 1);
    return answer;
}