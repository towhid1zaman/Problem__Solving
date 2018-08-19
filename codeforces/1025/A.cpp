#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
const double pi= acos(-1);
ll a[26];
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

     ll n,i;
     cin>>n; string s;
     cin>>s;

     if(n==1){
          cout<<"Yes\n";return 0;
     }

     for(i=0;i<s.size();i++){
          a[s[i]-'a']++;
     }

     for(i=0;i<26;i++){
          if(a[i]>1){
               cout<<"Yes\n";return 0;
          }
     }

     cout<<"No\n";
}


