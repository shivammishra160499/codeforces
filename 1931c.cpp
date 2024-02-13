#include <iostream>
#include <vector>

using namespace std;

int fun(vector<int>& v) {
    int n = v.size();
    int l = 0, r = n - 1;
    while (l < n && v[l] == v[0]) {
        l++;
    }
 
    while (r >= 0 && v[r] == v[n - 1]) {
        r--;
    }
    
    if(v[0]==v[n-1])
    return max(r-l+1,0);
    return min(n - l, r+1 );
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        cout << fun(v) << endl;
    }

    return 0;
}
