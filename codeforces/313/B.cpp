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
const int N = 200010;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    string s;
    cin>>s;
    int n = s.length();
    int sum = 0;
    vector<int>a(n);
    for(int i = n-1; i>=1;i--){
        if(s[i-1]==s[i]){
            a[i-1] = a[i]+1;
        }
        else a[i-1] = a[i];
    }
  //  a[n-1]-=1;
//    for(int i = 0; i<n;i++){
//        cout<<a[i]<< " ";
//    }
//    cout<<endl;
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<a[l-1] - a[r-1]<<endl;
    }




return 0;
}


