#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
const int mod = 1000000007; // (int)1e9+7
const int N = 200100;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int n,k;
    cin>>n>>k;
    multiset<int>power;
    for(int i = 0; i<31;i++){
        if(n&(1<<i)){
            //cout<<i<<endl;
            power.insert(i);
        }
    }
    while(power.size()<k)
    {
        int mx = *power.rbegin();  ///max element
        if(mx==0){
            break;
        }
        power.erase(power.find(mx)); /// power.erase(power.lower_bound(mx));
        power.insert(mx-1);
        power.insert(mx-1);
       // cout<<mx-1<<endl;
    }
//    for(auto x: power){
//        cout<<x<<" ";
//    }
    if(k!=power.size()){
        cout<<"NO"<<endl;
        return 0;
    }
    else cout<<"YES"<<endl;
    for(auto x: power){
       cout<<(1<<x)<<" ";
    }
    cout<<endl;



return 0;
}



