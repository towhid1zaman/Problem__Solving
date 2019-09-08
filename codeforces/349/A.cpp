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
const int N = 3000;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int n;
    cin>>n;
    bool f =  true;
    int cash = 0;
    vi v(n);
    vector<int>s;
    for(int i = 0; i<n;i++){
        cin>>v[i];
    }
    if(v[0]>25){
        cout<<"NO"<<endl;
        return 0;
    }
    int _25 = 0;
    int _50 = 0;
    int _100=0;
    for(int i = 0; i<n;i++){
        if(v[i]==25)_25++;
        if(v[i]==50){
            _50++;
            if(_25==0){
                f = false;
            }
            else _25--;
        }
        if(v[i]==100){
            if(_25==0){
                f = false;
            }
            else{
                if(_50>0){
                    _50--;
                    _25--;
                }
                else
                {
                    if(_25<3){
                        f = false;
                    }
                    else{
                        _25-=3;
                    }
                }
            }
        }
    }
    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;







return 0;
}

