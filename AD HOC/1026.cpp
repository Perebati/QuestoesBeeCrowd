#include <iostream>
#include <bitset>

using namespace std;


int main(void)
{
    long long int a, b;
    while(cin >> a >> b)
    {
        cout << (a ^ b) << endl;
    }
}