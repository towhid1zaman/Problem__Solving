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
const int N = int(3e5) + 99;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    string s;
    cin>>s;
    int cnt=0;
    for(int i = 0; i<s.length();i++){
        if(s[i]=='D'){
            if(s[i+1]=='a' and s[i+2]=='n' and s[i+3]=='i' and s[i+4]=='l'){
                cnt++;
            }
        }
        else if(s[i]=='O'){
            if(s[i+1]=='l' and s[i+2]=='y' and s[i+3]=='a'){
                cnt++;
            }
        }
        else if(s[i]=='S'){
            if(s[i+1]=='l' and s[i+2]=='a' and s[i+3]=='v' and s[i+4]=='a'){
                cnt++;
            }
        }
        else if(s[i]=='A'){
            if(s[i+1]=='n' and s[i+2]=='n'){
                cnt++;
            }
        }
        else  if(s[i]=='N'){
            if(s[i+1]=='i' and s[i+2]=='k' and s[i+3]=='i' and s[i+4]=='t' and s[i+5]=='a'){
                cnt++;
            }
        }
    }

    if(cnt==1){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;











return 0;
}



