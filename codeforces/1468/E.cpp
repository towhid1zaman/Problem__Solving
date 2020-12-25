#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;
int n;
vector<ll>a;
void input();

void solve(){
    sort(a.begin(),a.end());
    cout<<a[0]*a[2]<<"\n";
}

void Clear(){
    a.clear();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        input();
    solve();
    Clear();
    }
}

void input(){


    for(int i=0;i<4;i++){
        ll x;
        cin>>x;
        a.pb(x);
    }
}
