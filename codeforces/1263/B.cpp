#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
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

int main(){

    IOS;
    int Q;
    cin>>Q;
    while(Q--){
        int n,res = 0;
        cin>>n;
        vector<string>s(n);
        map<string,int>mup;
        for(int i = 0; i<n;i++){
            cin>>s[i];
            mup[s[i]]++;
        }
        for(int i = 0;i<n;i++){
            if(mup[s[i]]>1)
            {
                mup[s[i]]--;
                for(int j = 0; j<10; j++){
                    s[i][0] = j+'0';
                    if(mup[s[i]]>0)continue;
                    else break;
                }
                mup[s[i]]++;
                res++;
            }
        }
        cout<<res<<endl;
        for(int i = 0; i<n;i++){
            cout<<s[i]<<endl;
        }
    }
    



return 0;
}




