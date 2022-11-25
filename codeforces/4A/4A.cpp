#include <iostream>
using namespace std;

int n;

void sol()
{
    cin >> n;
    n-= 2; 
    if ( (n & 1) || (n < 1)) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main()
{
    sol();
    return 0;
}
