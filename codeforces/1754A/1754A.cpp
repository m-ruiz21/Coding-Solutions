#include <iostream>
#include <string>
using namespace std;

int t;
int n;
string m;

void sol()
{  
    cin >> n;
    cin >> m;
     
    int q = 0;
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if (m.at(i) == 'Q') q++;
        else 
        {
            if (q > 0) q--;
        }
    }

    if (q == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
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
