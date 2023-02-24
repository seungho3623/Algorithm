#include <string>
#include <vector>
#include <map>

using namespace std;

map<string, int> numberMap;

void MapCreate()
{
    numberMap["zero"] = 0;
    numberMap["one"] = 1;
    numberMap["two"] = 2;
    numberMap["three"] = 3;
    numberMap["four"] = 4;
    numberMap["five"] = 5;
    numberMap["six"] = 6;
    numberMap["seven"] = 7;
    numberMap["eight"] = 8;
    numberMap["nine"] = 9;
}

int solution(string s) {
    string answer = "";
    string tmp = "";
    MapCreate();
    
    for(char c : s)
    {
        if((isdigit(c)))
        {
            answer += c;
        }
        else
        {
            tmp += c;
            if(numberMap.find(tmp) != numberMap.end())
            {
                answer += to_string(numberMap[tmp]);
                tmp = "";
            }
        }
    }
    return stoi(answer);
}