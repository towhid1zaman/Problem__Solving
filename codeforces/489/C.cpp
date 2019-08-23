//https://youtu.be/3I3l-x93kOY
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define scan(n) scanf("%d", &n)
#define pin(n) printf("%d\n",n)
#define scanl(n) scanf("%lld", &n)
#define pll(n) printf("%lld\n",n)
const int mod = 1000000007; // (int)1e9+7
const int N = 50000;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
cerr.tie(nullptr);
    ll n,s,a,b;
    cin>>n>>s;
    if(s>n*9 or (s==0 and n>1)){
        cout<<"-1 -1"<<endl;
        return 0;
    }
    if(s==0)
    {
        cout<<"0 0"<<endl;
        return 0;
    }
    b=s;
    for(int i = 0; i<n;i++)
    {
        a = (n-i-1)*9;
        if(a>=b)
        {
            if(i==0)
            {
                cout<<1;
                b--;
            }
            else cout<<0;
        }
        else{
            cout<<b-a;
            b=a;
        }
    }
    cout<<" ";
    b=s;
    for(int i = 0; i<n;i++)
    {
        if(b==0)
        {
            cout<<0;
            continue;
        }
        if(b<=9)
        {
            cout<<b;
            b=0;

        }
        else{
            cout<<9;
            b-=9;

        }

    }
    cout<<endl;
    return 0;
}


