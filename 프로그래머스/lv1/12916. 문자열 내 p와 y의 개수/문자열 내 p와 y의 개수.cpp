#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int cnt = 0;
    
    for(char c : s)
    {
        if(c == 'p' || c == 'P') cnt++;
        if(c == 'y' || c == 'Y') cnt--;
    }

    return (cnt == 0) ? true : false;
}