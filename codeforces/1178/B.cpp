#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define all(v) (v).begin(),(v).end()
#define pd(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())

const int mod = 1000000007; // (int)1e9+7
const int N = int(3e5) + 99;

int main(){
        IO
        string s;
        cin>>s;

        int cnt=0;
        ll pre[s.length()],post[s.length()];
        memset(pre,0,sizeof pre);
        memset(post,0,sizeof post);
        for(int i=0;i<s.length();i++){
            if(i==0)continue;
            if(s[i]=='v' && s[i-1]=='v'){
                pre[i]=pre[i-1]+1;
            }
            else{
                pre[i]=pre[i-1];
            }
        }
        for(int i=s.length()-1;i>=0;i--){
            if(i==s.length()-1)continue;
            if(s[i]=='v' && s[i+1]=='v'){
                post[i]=post[i+1]+1;
            }
            else{
                post[i]=post[i+1];
            }
        }

        ll com=0;

        for(int i=0;i<s.length();i++){
            if(s[i]!='o')continue;
            //cout<<"ok";
            com+=pre[i]*post[i];
        }
        cout<<com;
return 0;
}






