#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    unsigned int h1, h2, m1, m2, mins1, mins2;

    while(1)
    {
        cin >> h1 >> m1 >> h2 >> m2;
        if(!h1 && !m1 && !h2 && !m2) return 0;

        if(!h1){mins1 = (24 * 60) + m1;}else{mins1 = h1 * 60 + m1;}
        if(!h2){mins2 = (24 * 60) + m2;}else{mins2 = h2 * 60 + m2;}

        if(mins2 > mins1)
        {
            cout << mins2 -  mins1 << endl;
        }else{

            cout << 24 * 60 - (mins1 - mins2) << endl;
        }

    }
    return 0;
}