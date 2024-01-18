#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
   int t;
   scanf("%d",&t);
   while(t--)
   {
   	int n;
   	scanf("%d",&n);
   	string a,b,c;
   	cin>>a>>b>>c;
   	int ans=0;
    
 
   	for(int i=0;i<n;i++)
   	{ 
   	 
   	 if(a[i]!=c[i] and b[i]!=c[i])
   	 {
   	 	ans=1;
   	 	break;
		}
	   }
	   if(ans==1)
	   cout<<"YES"<<endl;
	   else
	   cout<<"NO"<<endl;
   }
  return 0;
}
