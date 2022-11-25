#include <iostream>
using namespace std;

int n;
string w;

void sol()
{
    cin >> w;
    if (w.size() > 10) cout << *w.begin() << w.size() - 2 << *(--w.end()) << endl;
    else cout << w << endl;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        sol();
    }

    return 0;
}
