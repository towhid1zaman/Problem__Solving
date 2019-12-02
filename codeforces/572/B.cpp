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
    int n,s;
    cin>>n>>s;
    map<int,int>BB;
    map<int,int>SS;
    for(int i = 0; i<n;i++){
        char c;
        int p,q;
        cin>>c>>p>>q;
        if(c=='B'){
            BB[p] = BB[p]+q;
        }
        else SS[p]= SS[p]+ q;
    }
    stack<string>st;
    int i = 0;
    for (auto it = SS.begin(); it != SS.end() && i < s; it++, i++){
        stringstream ss;
        ss << "S " << it->first << " " << it->second;
        st.push(ss.str());
    }
    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }
    i = 0;
    for (auto it = BB.rbegin(); it != BB.rend() && i < s; it++, i++){
        cout << "B " << it->first << " " << it->second << endl;
    }
 



return 0;
}




