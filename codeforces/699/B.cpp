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
    int n,m;
    cin>>n>>m;
    string s[n];
    int fata1=0;
    int fata2=0;
    bool f = false;
    int cnt = 0;
//    map<int,int>row;
//    map<int,int>colmn;
    int row[N];
    int colmn[N];
    for(int i = 0; i<n;i++){
        cin>>s[i];
        for(int j = 0; j<s[i].length();j++){
            if(s[i][j]=='*'){
                    cnt++;
                    row[i]++;
                    colmn[j]++;
        }
    }
    }
//    cout<<cnt<<endl;
//    rep(i,0,n){
//        cout<<row[i]<<" ";
//    }
//    cout<<endl;
//    rep(i,0,m){
//        cout<<colmn[i]<<" ";
//    }
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            int cur = row[i] + colmn[j] - (s[i][j]=='*');
            if(cur==cnt){
                fata1 = i;
                fata2 = j;
                f = true;
                break;
            }
        }
    }
    if(f){
        cout<<"YES"<<endl;
        cout<<++fata1<<" "<<++fata2<<endl;
    }
    else
        cout<<"NO"<<endl;





return 0;
}
