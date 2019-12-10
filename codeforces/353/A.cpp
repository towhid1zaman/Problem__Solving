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
    int x[maxn],y[maxn];

    int main(){

    IOS;
    int n;
    cin>>n;
    int upe=0,loe=0;
    int sumu=0;
    int suml=0;
    for(int i = 0; i<n;i++){
        cin>>x[i]>>y[i];
        if(x[i]%2)upe++;
        if(y[i]%2)loe++;
        sumu+=x[i];
        suml+=y[i];
    }
    //cout<<upe<<" "<<loe<<endl;
    
  
    int res=0;
    int i = 0;
    while(i<n){
        if(sumu%2==0 and suml%2==0){
            cout<<res<<endl;
           return 0;
        }
        if((x[i]%2==1 and y[i]%2==0) or (x[i]%2==0 and y[i]%2==1)){
            swap(x[i],y[i]);
            sumu+=y[i];
            sumu-=x[i];
            suml+=x[i];
            suml-=y[i];
            res++;
        }
        i++;
    }
    cout<<-1<<endl;
    
    




    return 0;
    }




