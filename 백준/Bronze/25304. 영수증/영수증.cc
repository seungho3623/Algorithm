#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {   
    int x, t, a, b;

    cin >> x;
    cin >> t;

    for (auto i = 0; i < t; i++) {
        cin >> a >> b;
        x -= a * b;
    }

    if (x == 0) cout << "Yes";
    else cout << "No";

    return 0;
}