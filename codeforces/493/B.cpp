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

int main(){
        _ios;

        int T;
        cin>>T;
        vi first,second;
        first.push_back(0),second.push_back(0);
        ll in,f = 0,s = 0;
        rep(z,1,T){
            int x;
            cin>>x;
            if(x<0){
                second.push_back(abs(x));
                in= 2;
                s+= -x;
            }
            else f+=x,in=1,first.push_back(x);
        }
        if(f>s){
            cout<<"first"<<endl;
        }
        else if(s>f){
            cout<<"second"<<endl;
        }
        else{
            rep(i,0,first.size()-1){
                if(first[i]>second[i]){
                    cout<<"first"<<endl;
                    return 0;
                }
                else if(second[i]>first[i]){
                    cout<<"second"<<endl;
                    return 0;
                }
            }
            if(in==1)cout<<"first"<<endl;
            else cout<<"second"<<endl;
        }






return 0;
}





