#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    answer = sqrt(n);
    
    answer = (answer * answer == n) ? (answer + 1) * (answer + 1) : -1;
    return answer;
}