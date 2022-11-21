#include <iostream>
using namespace std;

int n;
int t;

void sol()
{
    int x = n / 2;
    int mid = x;
    for (int i = mid; i > 0; i--) 
    {
       cout << i << " ";
       cout << i + x << " ";
    } 
    
    if (n % 2 == 1) cout << n; 

    cout << endl;
}

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n; 
        sol(); 
    }
}
