#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int psz = p.size();
    
    for(int i = 0;i < t.size() - psz + 1;i++)
    {
        string num = t.substr(i, psz);
      
        bool same = true;
        
        for(int j = 0 ;j < psz;j++ )
        {
            if(num[j] < p[j])
            {
                answer++;
                same = false;
                break;
            }
            else if(num[j] > p[j])
            {
                same = false;
                break;
            }
        }
        
        if(same) answer++;   
    }
    return answer;
}