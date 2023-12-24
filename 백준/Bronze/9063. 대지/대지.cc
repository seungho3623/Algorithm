#include <iostream>
using namespace std;
int main()
{
    int N;
    int minx = 100000; int maxx = -100000;
    int miny = 100000; int maxy = -100000;
    
    cin >> N;
    
    int* x = new int[N]; //N만큼 동적할당
    int* y = new int[N]; //N만큼 동적할당
    
    for (int i = 0; i < N; ++i)
    {
        cin >> x[i] >> y[i];
        minx = min(minx, x[i]);
        maxx = max(maxx, x[i]);
        miny = min(miny, y[i]);
        maxy = max(maxy, y[i]);
    }
    cout << (maxx - minx) * (maxy - miny);
}
