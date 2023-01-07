#include <iostream>

/* Data Structures */
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_map>
#include <string>

/* Algos */ 
#include <cmath>
#include <algorithm>
using namespace std;

int t;
int n;

void sol()
{
    int s;
    int c = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> s;
        if (s) c++;
    }
    if (c >1)
    {
        n++;
    }
}

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        sol();
    }
    
    cout << n << endl;
    return 0;
}
