//https://youtu.be/3I3l-x93kOY
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define scan(n) scanf("%d", &n)
#define pin(n) printf("%d\n",n)
#define scanl(n) scanf("%lld", &n)
#define pll(n) printf("%lld\n",n)
const int mod = 1000000007; // (int)1e9+7
const int N = int(3e5) + 99;

int main(){
		IO
        ll q,n,pos1,pos2;

    cin>>q;


    while(q--)
    {
        cin>>n;

        vll a(n);

        ll chk=0;

        rep(i,n)
        {
            cin>>a[i];

            if(a[i]==1)  pos1=i;
            if(a[i]==n)  pos2=i;
        }

        if(n<=3)  cout<<"YES\n";

        else
        {
            if(a[0]!=1 && a[0]!=n)
            {
                if(a[0]!=ceil((a[1]+a[n-1])/(float)2))  chk=1;
            }
            if(a[n-1]!=1 && a[n-1]!=n)
            {
                if(a[n-1]!=ceil((a[n-2]+a[0])/(float)2))  chk=1;
            }

            for(int i=1;i<n-1;i++)
            {
                if(a[i]!=1 && a[i]!=n)
                {
                    if(a[i]!=ceil((a[i-1]+a[i+1])/(float)2)) chk=1;
                }
                else if(a[i]==1)
                {
                    if(a[i-1]+a[i+1]!=n+2)  chk=1;
                }
                else if(a[i]==n)
                {
                    if(a[i-1]+a[i+1]!=n) chk=1;
                }
            }

            if(pos1==0)
            {
                if(a[n-1]+a[1]!=n+2)  chk=1;
            }
            else if(pos1==n-1)
            {
                if(a[n-2]+a[0]!=n+2)  chk=1;
            }
            if(pos2==0)
            {
                if(a[1]+a[n-1]!=n)  chk=1;
            }
            else if(pos2==n-1)
            {
                if(a[0]+a[n-2]!=n)  chk=1;
            }


            if(chk)  cout<<"NO"<<endl;
            else     cout<<"YES"<<endl;
        }
    }



return 0;
}


