#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(s.length(), -1);
    vector<int> alphabet(27, -1);
    
    for (int i = 0; i < s.length(); i++) {
        int idx = s[i] - 'a';
        if (alphabet[idx] == -1) {
            alphabet[idx] = i;
            continue;
        }
     
        answer[i] = i - alphabet[idx];
        alphabet[idx] = i;
    }
    return answer;
}