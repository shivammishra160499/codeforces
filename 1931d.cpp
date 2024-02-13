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
 
int32_t main() {
    fastio();
    int t;
    cin >> t;
    while(t--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> v(n);
        map<pair<int, int>, int> mp; // Initialize map
        int ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            int a = v[i] % x;
            int b = v[i] % y;
            int p = ((x - a) + x) % x;
            int q = (y + b) % y; // Corrected syntax
            ans += mp[{p, q}];
            mp[{a, b}]++;
        }
        cout << ans << endl; // Print result with newline
    }
    return 0;
}
