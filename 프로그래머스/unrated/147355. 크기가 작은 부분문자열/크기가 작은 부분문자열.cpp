#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int psz = p.size();
    
    for(int i = 0;i < t.size() - psz + 1;i++)
    {
        string num = t.substr(i, psz);
        if(num <= p) answer++;
    }
    return answer;
}