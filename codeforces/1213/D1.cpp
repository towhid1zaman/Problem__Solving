#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long ll;
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
const int N =200005;
int n,k;
vector<int>v[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    cin>>n>>k;
    for(int i = 0; i<n;i++)
    {
        int x,c=0;
        cin>>x;
        do{
            v[x].push_back(c);
            c++;
            x>>=1;
        }while(x!=0);
    }
    int answer = 1e9;
    for(int i = 0; i<N;i++)
    {
        if((int)v[i].size() < k){
            continue;
        }
        nth_element(v[i].begin(),v[i].begin()+k,v[i].end());
        answer = min(answer,accumulate(v[i].begin(),v[i].begin()+k,0));
    }
    cout<<answer<<endl;









return 0;
}




