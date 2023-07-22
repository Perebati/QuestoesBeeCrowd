#include <iostream>
#include <vector>

using namespace std;

// calculo dos primos

bool ehPrimo(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }

    return true;
}

vector<int> gerarPrimos(int quantidade) {
    vector<int> primos;
    int num = 2;

    while (primos.size() < quantidade) {
        if (ehPrimo(num)) {
            primos.push_back(num);
        }
        num++;
    }

    return primos;
}

int josephus(int n, vector<int> & primos) {
    int r = 0;
    for (int i = 1; i <= n; i++)
    {
        r = (r + primos[i]) % i;
    }
        
    return r + 1;
}

int main()
{
    vector<int> entrada;
    int k = 0, i = 0;

    vector<int> primos = gerarPrimos(3502);

    while (1)
    {
        fill(entrada.begin(), entrada.end(), 0);
        cin >> k;
        if(!k) return 0;
        cout << josephus(k, primos) << endl;

  
    }

    return 0;
}