#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    for(char c : s)
    {
        if(c < 48 || c > 57)
            return false;
    }
    return (s.size() != 4 && s.size() != 6) ? false : true;
}