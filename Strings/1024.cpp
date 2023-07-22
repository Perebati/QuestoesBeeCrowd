#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string frase;
    int k = 0;
    cin >> k;
    cin.ignore();

    while (k--)
    {
        getline(cin, frase);

        for (int i = 0; i < frase.length(); i++)
        {
            if ((frase[i] >= 65 && frase[i] <= 90) || (frase[i] >= 97 && frase[i] <= 122))
            {
                frase[i] = frase[i] + 3;
            }
        }
        reverse(frase.begin(), frase.end());

        for (int i = frase.length() / 2; i < frase.length(); i++)
        {
            frase[i] = frase[i] - 1;
        }

        cout << frase << endl; 
    }
    return 0;
}