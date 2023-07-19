#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> entrada;
    vector<int> aux;
    int regioes = 0;

    while(cin >> regioes)
    {
        fill(entrada.begin(), entrada.end(), 0);
        fill(aux.begin(), aux.end(), 0);

        if(regioes == 0)
        {
            return 0;
        }

        for(int i = 0; i < regioes; i++)
        {
            entrada[i] = i;
        }

        //Aqui começa a matematica
        //como entrar m?
        //inconpleto
    }


    return 0;
}