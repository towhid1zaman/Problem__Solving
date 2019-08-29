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

ll ncr(ll n, ll r)
{
    ll p = 1, k = 1;
    if (n - r < r)
        r = n - r;

    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            ll m = __gcd(p, k);
            p /= m;
            k /= m;

            n--;
            r--;
        }
    }

    else
        p = 1;
    return p;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
	string s1,s2;
	cin>>s1>>s2;
	int len1 = s1.length();
	int len2 = s2.length();
	ll sum=0,cnt=0;
	for(int i = 0; i<len1;i++){
        if(s1[i]=='+')sum++;
        else if(s1[i]=='-')sum--;
    }
    for(int i = 0; i<len2;i++){
        if(s2[i]=='-')sum++;
        else if(s2[i]=='+')sum--;
        else if(s2[i]=='?')cnt++;
    }
    //cout<<sum<<" "<<cnt<<endl;
    if(sum<0){
        sum*=-1;
    }
    if(sum>cnt){
        puts("0.000000000000");
        return 0;
    }
    if((sum+cnt)%2==1){
        puts("0.000000000000");
        return 0;
    }
    else{
        cout<<setprecision(12)<<fixed<<ncr(cnt,(cnt+sum)/2)/pow(2,cnt);
    }








return 0;
}


