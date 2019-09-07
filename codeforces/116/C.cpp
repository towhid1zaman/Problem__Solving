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

int v[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int n;
    cin>>n;
    set<int>s;
    map<int,bool>m;
    for(int i = 1;i<=n;i++){
        cin>>v[i];
    }
    int cnt = 0;
    m.clear();
    m[-1]=true;
    int k;
    while(true){
        k=0;
        cnt++;
        s.clear();
        for(int i = 1; i<=n;i++){
            if(m.find(i)==m.end() and m.find(v[i]) !=m.end() ){
                k =1;
                s.insert(i);
            }

        }
        each(it,s){
            m[*it] = true;
        }
        if(!k)break;
    }
    cout<<cnt - 1<<endl;











return 0;
}
