#include<bits/stdc++.h>
using namespace std;
typedef long long LL;


#define pb push_back
#define lcm(a,b) a * (b / gcd(a, b))
#define gcd(a,b) __gcd(a,b)
#define nl "\n"
#define inf 2e16
#define MAX (int)2e5+5
#define pi	acos(-1.0)
#define ff first
#define ss second
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define sqr(a) ((a)*(a))
#define mem(a,x) memset(a,x,sizeof(a))
#define RL(x) scanf("%lld",&x)
#define R(x) scanf("%d",&x)
#define RS(x) cin>>s
//#define RSL(x) scanf(" %[^\n]", x)
#define RSL(cin, x) getline(cin, x)
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
#define f(i,a,b) for(int i = a; i<=b;i++)
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{
   IOS
        int n;
        R(n);
        int space = n / 2;
        for(int i = 0; i<n;i++){
            int D = n - (space*2);
                for(int j = 0; j<space;j++){
                    cout<<"*";
                }
                for(int j = 0; j<D;j++){
                    cout<<"D";
                }
                for(int j = 0; j<space;j++){
                    cout<<"*";
                }
                cout<<nl;
                if(i<n/2){
                    space--;
                }
                else space++;
        }








     return 0;
}




