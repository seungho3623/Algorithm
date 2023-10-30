#include <iostream>

using namespace std;

int alpha[26];
string input;
//아스키코드 : 대문자 65~90, 소문자 97~122

int main() {
    cin >> input;

    for(int i = 0; i < input.length(); i++) {
        if(input[i] < 'a') alpha[input[i] - 'A']++; 
        else alpha[input[i] - 'a']++; 
    }

    int max = 0, max_indx=0;

    for(int i = 0; i < 26; i++) {
        if(max<alpha[i]) {
            max=alpha[i];
            max_indx = i;
        }
    }
    for(int i = 0; i < 26; i++) {
        if(max_indx == i) continue;
        if(max==alpha[i]){
            cout << "?";
            return 0;
        }
    }
    cout << (char)(max_indx + 'A');
    return 0;
}
