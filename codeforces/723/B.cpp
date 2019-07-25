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
#define mp make_pair
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool brac=false,on=false;
    int out=0,in=0,cnt=0;
    for(int i = 0;s[i];i++)
    {
        if(s[i]=='_' or s[i]=='(' or s[i]==')'){
            if(brac==true and on ==true){
                in++;
            }
            if(s[i]=='('){
                brac=true;
               }
            else if(s[i]==')'){
                brac=false;
               }
               cnt = 0;
               on = false;
        }
        else{
            on=true;
            cnt++;
            if(brac==false)
            {
                out = max(out,cnt);
            }
        }
    }
    cout<<out<<" "<<in<<endl;



return 0;
}




