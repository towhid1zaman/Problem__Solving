//https://youtu.be/3I3l-x93kOY
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
const int mod = 1000000007; // (int)1e9+7
const int N = int(3e5) + 99;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
cerr.tie(nullptr);

	///0 ="",1="",2="2",3="3",4="223",5="5",6="53",7="7",8="7222",9="7332";
	int n;
	cin>>n;
	string s;
	cin>>s;
	//sort(all(s)),reverse(all(s));
	string res ="";
	for(int i = 0; i<n;i++)
    {
        if(s[i]=='0' or s[i]=='1'){
            res+="";
        }
        if(s[i]=='2'){
            res+="2";
        }
        if(s[i]=='3'){
            res+="3";
        }
        if(s[i]=='4'){
            res+="223";
        }
        if(s[i]=='5'){
            res+="5";
        }
        if(s[i]=='6'){
            res+="53";
        }
        if(s[i]=='7'){
            res+="7";
        }
        if(s[i]=='8'){
            res+="7222";
        }
        if(s[i]=='9'){
            res+="7332";
        }
    }
   sort(all(res)),reverse(all(res));
    cout<<res<<endl;








return 0;
}

