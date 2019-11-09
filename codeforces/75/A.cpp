#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define endl "\n"

const int mod = 1000000007; // (int)1e9+7
const int N = 200100;
//Convert int to string
template <typename T>
string to_str(T str)
{
    stringstream stream;
    stream << str;
    return stream.str();
}

//Convert string to int
template <typename T>
int to_int(T num)
{
    int val;
    stringstream stream;
    stream << num;
    stream >> val;
    return val;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int first = a+b;
    string A = to_str(a);
    string B = to_str(b);
    string fA="";
    string fB="";
    for(int i = 0; i<A.size();i++){
        if(A[i]=='0')continue;
        fA+=A[i];
    }
   // cout<<fA<<endl;

    for(int i = 0; i<B.size();i++){
        if(B[i]=='0')continue;
        fB+=B[i];
    }
    string F = to_str(first);
    string fF="";
    for(int i = 0; i<F.size();i++){
        if(F[i]=='0')continue;
        fF+=F[i];
    }
    int chek = to_int(fF);
    int second = (to_int(fA) + to_int(fB));
    if(chek==second){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;



return 0;
}




