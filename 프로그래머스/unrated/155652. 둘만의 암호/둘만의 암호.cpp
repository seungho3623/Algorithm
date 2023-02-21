#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string solution(string s, string skip, int index){
    string answer = "";

    for(auto stmp : s)
    {
        for(int i = 0; i < index; i++)
        {
            stmp++;
            if(stmp > 'z')
                stmp = 'a';

            for(int i = 0; i < skip.length(); i++)
            {
                if(stmp == skip[i])
                {
                    stmp++;

                    if(stmp > 'z')
                        stmp = 'a';

                    i = -1;
                }
            }
        }
        answer += stmp;
    }

    return answer;
}