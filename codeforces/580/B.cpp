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
#define pd(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())

const int mod = 1000000007; // (int)1e9+7
const int N = int(3e5) + 99;
const int MIX  =200005;
pair<ll,ll>p[MIX];
int main(){
	IO
    ll n,d;
    cin>>n>>d;
    for(int i=0; i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n);
    ll sum = 0;
    ll result = 0;
    for(int i = 0,j=0; i<n;i++)
    {
        sum+=p[i].second;
        while(j<=i and p[j].first+d<=p[i].first)
        {
            sum-=p[j].second;
            j++;
        }
        result = max(sum,result);
    }
    cout<<result<<endl;











return 0;
}


