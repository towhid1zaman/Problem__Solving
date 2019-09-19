#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <ll, ll> pll;
typedef vector<pll>vip;
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
const int N = 1005;
ll n;
ll m[N][N];
ll ans[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int n;
    cin>>n;
    vll v(n);
    set<ll>dis;
    for(int i = 0; i<n;i++){
        cin>>v[i];
        dis.insert(v[i]);
    }
    ll sz = dis.size();
    //cout<<sz<<endl;
    if(sz==1){
        cout<<"YES"<<endl;
        return 0;
    }
    if(sz==2){
        cout<<"YES"<<endl;
        return 0;
    }
    if(sz==4){
        cout<<"NO"<<endl;
        return 0;
    }
    vll three;
    for(auto x: dis){
            //cout<<x<<" ";
        three.push_back(x);
    }
    sort(all(three));
//    for(int i = 1; i<=3;i++){
//        cout<<three[i]<<" ";
//    }
//    cout<<endl;
    if(sz==3){
        if((2*three[1])==(three[0]+three[2])){
        cout<<"YES"<<endl;
        return 0;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    else
        cout<<"NO"<<endl;


return 0;
}
