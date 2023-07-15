#include <iostream>
#include <string.h>

bool flag = true;
using namespace std;

string checastring(int *entrada)
{
    flag = true;
    for(int i = 0; i < 4; i++)
    {
        if((entrada[i + 1] - entrada[i]) < 0)
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        return "C";
    }else
    {
        flag = true;
        for(int i = 0; i < 4; i++)
        {
            if((entrada[i + 1] - entrada[i]) > 0)
            {
                flag = false;
                break;
            }
        }
    }
    if(flag)
    {
        return "D";
    }else{return "N";}
}

int main(void)
{
    int entrada[5];

    for(int i = 0; i < 5; i++)
    {
        cin >> entrada[i];
    }
    cout << checastring(entrada) << endl;  
}