#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ff first
#define ss second
#define pb push_back

int dx4[] = {0,0,1,-1};
int dy4[] = {1,-1,0,0};
int dx8[] = {0,0,1,1,1,-1,-1,-1};
int dy8[] = {1,-1,1,-1,0,0,-1,1};

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200100;
vector<int>prime;
void seive(int n){
    bool pmark[n+1];
    memset(pmark,true, sizeof pmark);
    for(int i = 2; i*i<=n;i++){
        /// true means prime
        if(pmark[i]==true){
            for(int p = i*i; p<=n;p+=i){
                pmark[p] = false;
            }
        }
    }
    for(int i = 2; i<=n;i++){
        if(pmark[i]){
            prime.push_back(i);
        }
    }
}
bool isprime(int n){
    if(n==2)return true;
    if(n<2 or n%2==0)return false;
    for(int p = 3; p*p<=n;p+=2){
        if(n%p==0){
            return false;
        }
    }
    return true;
}
int main(){
        _ios;


        seive(2000);
        int cnt =0;
        map<int,bool>mp;
        for(int i = 0; i<prime.size()-1;i++)
        {
            int x = prime[i]+prime[i+1]+1;
            mp[x] = true;
        }
        int n,k;
        cin>>n>>k;
        for(int i = 2; i<=n;i++)
        {
            if(i%2==1 and isprime(i))
            {
                if(mp[i]){
                    cnt++;
                }
            }
        }
        //cout<<cnt<<endl;
        if(cnt>=k){
            puts("YES\n");
        }
        else puts("NO\n");



return 0;
}




