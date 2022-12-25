#include <iostream>
#include <cmath>
using namespace std;


void sol()
{
    double n;
    double m;
    double a;

    cin >> n;
    cin >> m;
    cin >> a;

    long long int x = ceil(n / a);
    long long int y = ceil(m / a);
    cout << x * y << endl;
}

int main()
{
    sol();

    return 0;
}
