#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

void sol()
{
    int n;
    cin >> n;
    set<int> in; 
    vector<int> r;
    for (int i = 0; i < n/2; i++)
    {
        int c;
        cin >> c;
        if (in.find(c) == in.end())
        {
            r.push_back(0);
            r.push_back(c);
            in.insert(c);    
        }
        else
        {
            cout << -1 << endl; 
            return;
        }
    }
   
    for (int i = n - 1; i > 0; i-=2)
    {
        for(int j = n; j > 0; j--)
        {
            if (in.find(j) != in.end()) continue;
            
            if (j < r.at(i))
            {
                r.at(i-1) = j;
                in.insert(j);
                break;
            } 
        }
        if (r.at(i-1) == 0) { cout << "-1" << endl; return; }
    }

    for (int i = 0; i < n; i++) cout << r[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        sol();
    }

    return 0;
}
