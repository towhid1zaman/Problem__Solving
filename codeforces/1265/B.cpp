#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ff first
#define ss second
#define pb push_back

int dx4[ ] = {0,0,1,-1};
int dy4[ ] = {1,-1,0,0};
int dx8[ ] = {0,0,1,1,1,-1,-1,-1};
int dy8[ ] = {1,-1,1,-1,0,0,-1,1};

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200100;
char chek[maxn];
int v[maxn];
int index[maxn];
int main(){

    IOS;
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        rep(i,1,t){
            cin>>v[i];
            index[v[i]] = i;
        }
        chek[1]='1';
        int a = index[1];
        int b = index[1];
        rep(i,1,t){
            int res =  index[i];
            b = max(res,b);
            a = min(res,a);
            if(b-a+1==i){
                chek[i] = '1';
            }
            else chek[i] = '0';
        }
        rep(i,1,t){
            cout<<chek[i];
        }
        cout<<endl;
        
    }




return 0;
}




