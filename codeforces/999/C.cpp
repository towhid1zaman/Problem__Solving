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
    string s;
    cin>>s;
    for(int i = 0; i<26;i++){
        for(int j = 0; j<s.size();j++){
            if(s[j]=='a'+i){
                k--;
                s[j]='#';
                if(k==0){
                    break;
                }
            }
        }
        if(k==0){
            break;
        }
    }
    for(int i = 0; i<s.size();i++){
        if(s[i]=='#'){
            continue;
        }
        else cout<<s[i];
    }
    cout<<endl;


return 0;
}




