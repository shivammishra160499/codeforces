#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    unsigned int t;
    scanf("%u", &t);
    while(t--) {
        unsigned long long int n,i;
        scanf("%llu", &n);
        unsigned long long int a[n];
        for(i=0; i<n; i++) {
            scanf("%llu", &a[i]);
        }
        sort(a, a+n);
        unsigned long long int ans = 0;
        for(i=0; i<n; i++) {  
            unsigned long long int end = (upper_bound(a, a+n, a[i]) - a - 1);
            ans += ((end - i) * i);
        }
        printf("%llu\n", ans);
    }
 
    return 0;
}
