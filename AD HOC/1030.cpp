#include <iostream>

using namespace std;

int talJosephus(int n, int m)
{
    int r = 0;
    for(int i = 1; i <= n; i++)
    {
        r = (r + m) % i;
    }
    return r;
}

int main()
{
    int k = 0, n, m, i = 1;
    cin >> k;

    while(i <= k)
    {
        cin >> n >> m; 
        cout << "Case " << i++ << ": " << talJosephus(n, m) + 1 << endl;
    }
    
    return 0;
}