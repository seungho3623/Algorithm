#include <string>
#include <map>
#include <vector>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    
    vector<string> answer(players); // 최종 순위를 저장할 vector
    
    map<string, int> m1;            // 플레이어의 이름과 순위를 저장할 map
    
    for (int i = 0; i < players.size(); i++) {
        m1[players[i]] = i; // 플레이어의 이름과 순위 저장
    }
    
    for(int i=0;i<callings.size();i++){
        // map을 이용하여 호출된 선수의 등수 O(logn)시간에 탐색
        int locate = m1[callings[i]];
        // map에 저장된 순위 갱신
        m1[answer[locate-1]] +=1;
        m1[callings[i]] -=1;
        // answer에 저장된 순서 변경
        string tmp = answer[locate];
        answer[locate] = answer[locate-1];
        answer[locate-1] = tmp;   
    }
    return answer;
}