#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
const int mod = 1000000007; // (int)1e9+7
const int N = int(3e5) + 99;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int n,k,x=0;
    cin>>n>>k;
    vector<int>a,prefix;
        for(int i = 0; i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
            if(i>0)
            {
                prefix.push_back(prefix[i-1]+a[i]);
            }
            else{
                prefix.push_back(a[i]);
            }
        }
        int sum = 0,f=0;
        int ans = 1e9;
        for(int i = 0; i<=n-k ;i++){
            sum =  prefix[i+k-1] - f;
            f = prefix[i];
            if(sum<ans)
            {
                x = i;
                ans = sum;
            }
        }

    cout<<x+1<<endl;
return 0;
}


