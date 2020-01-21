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

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

int pre[maxn],suf[maxn];
bool ok[maxn];
int main(){
        _ios;

        int a,b;
        string s;
        cin>>s>>a>>b;

        int n = s.size();
        pre[0]=(s[0]-'0')%a;
        for(int i = 1; i<n;i++){
            pre[i] = (pre[i-1]*10 + s[i]-'0')%a;
        }
        suf[n] = 0;
        int pos = 1;
        for(int i = n-1; i>0;i--){
            ok[i] = ok[i+1];
            if(s[i] !='0') ok[i]=1;
            suf[i] = (suf[i+1] + pos*(s[i]-'0'))%b;
            pos*=10;
            pos%=b;
        }

        for(int i = n-1; i>=0;i--){
            if(pre[i-1]==0 and suf[i]==0 and ok[i]){
                cout<<"YES"<<endl;
                for(int k = 0; k<i;k++)cout<<s[k];
                cout<<endl;
                for(int k = i; k<n;k++)cout<<s[k];
                cout<<endl;
                return 0;
            }
        }
        cout<<"No"<<endl;





return 0;
}





