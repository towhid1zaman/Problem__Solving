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
    int d0,d1,d2,d3;
    cin>>d0>>d1>>d2>>d3;
    if(d0+1==d1 and d2==0 and d3==0){
        cout<<"YES"<<endl;
        for(int i = 0; i<d0;i++){
            cout<<"1 0 ";
        }
        cout<<"1"<<endl;
        return 0;
    }
    if(d0==d1+1 and d2==0 and d3==0){
        cout<<"YES"<<endl;
        for(int i = 0; i<d1;i++){
            cout<<"0 1 ";
        }
        cout<<"0"<<endl;
        return 0;
    }
    if(d1+1==d2 and d0==0 and d3==0){
        cout<<"YES"<<endl;
        for(int i = 0; i<d1; i++){
            cout<<"2 1 ";
        }
        cout<<"2"<<endl;
        return 0;
    }
    if(d2+1==d1 and d0==0 and d3==0){
        cout<<"YES"<<endl;
        for(int i = 0;i<d2;i++){
            cout<<"1 2 ";
        }
        cout<<1<<endl;
        return 0;
    }
    if(d2+1==d3 and d0==0 and d1==0){
        cout<<"YES"<<endl;
        for(int i=0; i<d2;i++){
            cout<<"3 2 ";
        }
        cout<<"3"<<endl;
        return 0;
    }
    if(d3+1==d2 and d0==0 and d1==0){
        cout<<"YES"<<endl;
        for(int i = 0; i<d3; i++){
            cout<<"2 3 ";
        }
        cout<<"2"<<endl;
        return 0;
    }
    int l1 = d1-d0;
    int l2 = d2-d3;
    if(l1<0 or l2<0){
        cout<<"NO"<<endl;
        return 0;
    }
    if(abs(l1-l2)>1){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    if(l1==l2+1){
      cout<<"1 ";
    }
    for(int i = 0; i<d0;i++){
        cout<<"0 1 ";
    }
    for(int i = 0; i<min(l1,l2);i++){
        cout<<"2 1 ";
    }
    for(int i = 0; i<d3;i++){
        cout<<"2 3 ";
    }
    if(l2==l1+1){
        cout<<"2";
    }
    cout<<endl;
    
    




    return 0;
    }




