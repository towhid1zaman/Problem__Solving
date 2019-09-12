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
#define unq(v) (v).erase(unique((v).begin(),(v).end()),(v).end())
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
const int mod = 1000000007; // (int)1e9+7
const int N = 3000;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int n ;
    cin>>n;
    string s;
    cin>>s;
    vll v(n);
    for(int i = 0; i<n;i++){
        cin>>v[i];
    }
    ll res = INT_MAX;
    for(int i = 0; i<n-1;i++){
        if(s[i]=='R' and s[i+1]=='L'){
            res = min(res,(v[i+1]-v[i])/2);
        }
    }
    if(res==INT_MAX){
        cout<<-1<<endl;
    }
    else
        cout<<res<<endl;


return 0;
}







