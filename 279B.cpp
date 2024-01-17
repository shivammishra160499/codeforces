#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t;

    // Use %d for integers in scanf
    scanf("%d %d", &n, &t);

    int a[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        a[i] = sum + x;
        sum += x;
    }

    auto it = upper_bound(a, a + n, t);

    if (it == a + n) {
        printf("%d", n);
    } else {
        int ans = it - a;

        for (int i = 0; i < n; i++) {
            auto it2 = upper_bound(a, a + n, t + a[i]);
            int dif = (it2 - 1) - (a + i);

            if (dif > ans) {
                ans = dif;
            }
        }

        printf("%d", ans);
    }

    return 0;
}

