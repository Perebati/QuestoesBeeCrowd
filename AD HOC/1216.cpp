#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double distTotal = 0;
    string nome;
    long long dist = 0;
    unsigned int casas = 0;

    while(getline(cin, nome))
    {
        cin >> dist;
        cin.ignore();

        distTotal += dist;
        casas++;
    }
    cout << fixed << setprecision(1);
    cout << distTotal/casas << endl;

    return 0;
}