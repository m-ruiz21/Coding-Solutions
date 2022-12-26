
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

/*
column = letter# base 26
number shown = row number 

R {row} C {column}
*/

/* 
All upper case, therefore
letter # = ASCII value - 64
*/
int t;

void sol()
{
   string in;
   cin >> in;
   bool nums = false;
   bool lc = true;
   for (char c : in)
   {
       if (c < 64) nums = true;
       else if  (c > 64 && nums)
       {
           lc = false;
           break;
       }
   }
    
   if (lc)
   {
       // letter columns -> numbered
       int n = 0;
       int c = 0;
       while(in.at(n) > 64) { n++; }
       string c_s = in.substr(0, n);
       int d = n-1;
       for (char ch : c_s) { c += (ch - 64) * pow(26, d); d--; }

       int r = 0;
       cout << "R";
       for (int j = n; j < in.size(); j++) cout << in.at(j);
       
       cout << "C" << c << endl;
   }
   else 
   {
       // number columns -> lettered
       int n = 1;
       while(in.at(n) < 64) { n++; } 
       string r = in.substr(1, n-1);

       int c = stoi(in.substr(n+1, in.length() - n)); 
       string c_s = "";
       while (c > 0)
       {
           // edit case where c%26 == 0
           if (c%26 == 0) { c_s = 'Z' + c_s; c = c / 26 - 1; }
           else { c_s = (char) (c%26 + 64) + c_s; c = c / 26; }
       }
       cout << c_s << r << endl;
   }
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
