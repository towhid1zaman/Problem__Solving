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
    int n;
    cin>>n;
    vi v(n);
    for(int i = 0 ; i<n;i++){
        cin>>v[i];
    }
    //unq(v);
    int pre = 0;
    int rest = 0;
    for(int i = 0; i<n;i++){
        if(v[i]==0){
            rest++;
            pre = 0;
        }
        else if(v[i]==1){
            if(pre==1){
                rest++;
                pre = 0;
            }
            else{
                pre = 1;
            }
        }
        else if(v[i]==2){
            if(pre==2){
            rest++;
            pre=0;
            }
            else pre = 2;
        }
        else{
            if(pre==0)pre=3;
            else if(pre==1)pre=2;
            else if(pre==2)pre=1;
            else if(pre==3)pre=3;

        }
    }
    cout<<rest<<endl;


return 0;
}




