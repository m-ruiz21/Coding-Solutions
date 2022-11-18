#include <iostream>
#include <iterator>
#include <utility>
#include <vector>
#include <cmath>
#include <stdlib.h> 
using namespace std;
#define  GREEN = "\033[0;32m"
#define RED = "\033[0;31m"
#define NC = "\033[0m"

/*
    first hypothesis -> can't cancel out if it's an odd number

    let's observe the even case:
    
    -1 1 1 1 1 1 1 
    (-1) (1) (1, 1) (1, 1)

    hypothesis -> treat everything as a pair
*/


int t;
int n;

int v1;
int v2;
int p;
int i;

void sol()
{
    cin >> n;
    if (n&1) 
    { 
        cout << -1 << endl;
        for (int j=0; j < n; j++) cin >> v1;
        return; 
    }
    
    int* r = new int[n + n];
    i = 0; p = 0;
    for (int it = 0; it < n; it+=2)
    {
       cin >> v1;
       cin >> v2;
       if (v1 == v2)
       {
            r[i] = it + 1;
            r[i+1] = it + 2;
            i+=2;
            p++;
       }
       else 
       {
            r[i] = it + 1;
            r[i+1] = it + 1;
            r[i+2] = it + 2;
            r[i+3] = it + 2;
            i+=4;
            p+=2;
       }
    }
    
    cout << p << endl;
    for (int it = 0; it < p+p; it+=2)
    {
        cout << r[it] << " " << r[it + 1] << endl; 
    }

    delete[] r;
}

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        sol();
    }

    return 0;
}
