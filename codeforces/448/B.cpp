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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    string x,y;
    cin>>x>>y;
    string a=x,b=y;
    sort(all(a)),sort(all(b));
    if(a==b){
        cout<<"array"<<endl;
        return 0;
    }
    int pos = 0;
    for(int i = 0; i<x.size();i++){
        if(pos<y.size() and x[i]==y[pos]){
            pos++;
        }
    }
    if(pos==y.size()){
        cout<<"automaton"<<endl;
        return 0;
    }
    int j = 0;
    for(int i = 0; a[i];i++){
        if(a[i]==b[j]){
            j++;
        }
    }
    if(j==y.size()){
        cout<<"both"<<endl;
        return 0;
    }
    else
    {
        cout<<"need tree"<<endl;
        return 0;
    }
return 0;
}




