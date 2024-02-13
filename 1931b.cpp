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
 

bool canMakeWaterEqual(vector<int>& containers) {
    int n = containers.size();
    int totalWater = 0;
    
    // Calculate total sum of water in all containers
    for (int water : containers) {
        totalWater += water;
    }
    
    // Check if the total sum of water is divisible by the number of containers
    if (totalWater % n != 0) {
        return false;
    }
    
    int averageWater = totalWater / n;
    
    // Check if each container can reach the average amount of water
    int excessWater = 0;
    for (int water : containers) {
        excessWater += water - averageWater;
        if (excessWater < 0) {
            excessWater = 0;
        }
    }
    
    return excessWater == 0;
}

int32_t main() {
    int t;
    cin>>t;
    while(t--)
    {
            int n;
    cin >> n;
    
    vector<int> containers(n);
    for (int i = 0; i < n; ++i) {
        cin >> containers[i];
    }
    
    if (canMakeWaterEqual(containers)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
        
    }

    
    return 0;
}
