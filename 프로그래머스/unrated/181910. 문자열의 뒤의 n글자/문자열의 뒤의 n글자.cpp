#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int n) {
//     string answer = "";
//     reverse(my_string.begin(), my_string.end());
    
//     for(auto i = 0; i < n; i++)
//         answer += my_string[i];
    
//     reverse(answer.begin(), answer.end());
    
//     return answer;
    return my_string.substr(my_string.size() - n);
}