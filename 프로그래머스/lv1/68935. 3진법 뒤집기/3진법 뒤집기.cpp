#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int three = 1;
    vector <int> threeArray;
    
    while(n > 0){
        threeArray.push_back(n % 3);
        n /= 3;
    }
    
    for(int i = threeArray.size() - 1; i >= 0; i--)
    { 
        answer += (threeArray[i] * three);
        three *= 3;
    }
    
    return answer;
}