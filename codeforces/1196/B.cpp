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
ll n,i,c,d,e,t,k,pi,z;
ll p[300005],f[300005];
void query(){
    cin>>n>>k;
            for(i=1; i<=n; i++){
           cin>>f[i];
           f[i]+=f[i-1];
           f[i]%=2;
          }
          if(k==1){
           if(f[n]==0){
            cout<<"NO"<<endl;
           }else{
            cout<<"YES"<<endl;
            cout<<n<<endl;
           }
          return;
          }
          if(k%2!=f[n]){
           cout<<"NO"<<endl;
           return;
          }
          k--;
          pi=0;
          z=1;
          for(i=1; i<=n; i++){
           if(k==0) break;
           if(f[i]==z){
               z++;
               z%=2;
            pi++;
            p[pi]=i;
            k--;
           }
          }
          if(k>0){
           cout<<"NO"<<endl;
          return;
          }
          cout<<"YES"<<endl;
          for(i=1; i<=pi; i++) cout<<p[i]<<" ";
          cout<<n<<endl;
}

int main(){
	IO
    int tt;
    cin>>tt;
    while(tt--)
    {
        query();
    }
return 0;
}



