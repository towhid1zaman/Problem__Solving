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
const int maxn = 200100;

int main(){
        _ios;

        int T;
        cin>>T;
        while(T--){

                    int n;
                    cin>>n;
                    int N = n;
                    int sq = sqrt(n);
                    int a = 0,b = 0, c = 0;
                    for(int i = 2;i<=sq;i++){
                        if(n%i==0){
                            a = i;
                            break;
                        }
                    }
                    //cout<<a<<endl;
                    if(a==0){
                        cout<<"NO"<<endl;
                        continue;
                    }
                    n/=a;
                    sq = sqrt(n);
                    for(int i = 2; i<=sq;i++){
                        if(n%i==0 and i!=a){
                            b = i;
                            break;
                        }
                    }
                    //cout<<b<<endl;
                    if(b==0){
                        cout<<"NO"<<endl;
                        continue;
                    }
                    c = N/(a*b);
                    //cout<<c<<endl;
                    if(a!=b and b!=c and a!=c and a*b*c==N){
                        cout<<"YES"<<endl;
                        cout<<a<<" "<<b<<" "<<c<<endl;
                    }
                    else cout<<"NO"<<endl;

        }



return 0;
}





