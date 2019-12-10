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

    int main(){

    IOS;
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vi v(n);
        map<int,int>mup;
        for(int i = 0; i<n;i++){
            cin>>v[i];
            mup[v[i]]++;
        }
        int half = n/2;
        unq(v),reverse(all(v));
        n = v.size();
        int g=0,s=0,b=0;
        if(half<3){
            cout<<"0 0 0"<<endl;
            continue;
        }
        g = mup[v[0]];
        int cur = 1;
        while(cur<n and s<=g){
            s+=mup[v[cur]];
            cur++;
        }
        while(cur<n and g+s+b+mup[v[cur]]<=half){
            b+=mup[v[cur]];
            cur++;
        }
        if(g and s and b and g<s and g<b)cout<<g<<" "<<s<<" "<<b<<endl;
        else cout<<"0 0 0"<<endl;
    }




    return 0;
    }




