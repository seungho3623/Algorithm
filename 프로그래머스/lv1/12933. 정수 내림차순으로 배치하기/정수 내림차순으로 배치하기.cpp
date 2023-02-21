#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string numbers = to_string(n);
    sort(numbers.rbegin(), numbers.rend());
    answer = stoll(numbers);
    return answer;
}