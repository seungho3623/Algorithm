#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;
    
    for(int i = 0; i < numbers.size(); i++)
    {
        if(numbers[i]) answer -= numbers[i];
    }
    return answer;
}