#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define set_bits  __builtin_popcountll
#define endl '\n'
#define debug(x) cerr << #x <<" "; _print(x); cerr <<"\n";
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define unique(v)  v.erase(unique(v.begin(),v.end()),v.end())
 
const double PI = 3.1415926535897932384626;
const int INF = INT_MAX;
const int MOD = 1e9 + 7; 
const int MAXN = 1e6 + 5;
  
int calculateDistinctFactors()
{
    int a, b, l;
    cin >> a >> b >> l;
    set<int> distinct_factors;
    int ans = 0;
    int p1 = 1;
    while (p1 <= l)
    {    
        if (l % p1 == 0)
        {  
            int k = l / p1;
            int p2 = 1;
            while (p2 <= k)
            {
                if (k % p2 == 0)
                    distinct_factors.insert(k / p2);
                p2 *= b;
            }
        }
        p1 *= a;
     }
    
    return distinct_factors.size();
}

int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        cout << calculateDistinctFactors() << endl;
    }
    
    return 0;
}
