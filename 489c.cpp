#include<iostream>
#include<algorithm>
using namespace std;
 
int main() {
    int l, s;
    scanf("%d %d", &l, &s);
 
    if (s == 0) {
    	if(l==1)
        printf("0 0");
        else
        printf("-1 -1");
        return 0;
    }
 
    string maxi = "";
    for (int i = 0; i < l; i++) {
        int temp = min(s, 9);
        maxi += ('0' + temp);  // Use char literals directly
        s -= temp;
    }
 
    if (s) {
        printf("-1 -1");
        return 0;
    }
 
    string mini = maxi;
    reverse(mini.begin(), mini.end());
	int i=0;
    while( mini[i] == '0')
    i++;
    mini[i]--,mini[0]++;
    printf("%s %s", mini.c_str(), maxi.c_str());  // Use c_str() to print strings in printf
 
    return 0;
}
 
