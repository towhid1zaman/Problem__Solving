#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

void input();
ll c[3];
ll a[5];
void solve(){
    ll leftpaper, leftplastic;
    c[0] -=a[0];
    if(c[0]<0){
        cout<<"NO\n";   return;
    }
    c[1] -= a[1];
    if(c[1]<0){
        cout<<"NO\n";   return;
    }
    c[2] -= a[2];
    if(c[2]<0){
        cout<<"NO\n";   return;
    }
    ll mn = min(c[0],a[3]);
    a[3]-=mn;
    c[0]-=mn;
    c[2]-=a[3];
    mn = min(c[1],a[4]);
    a[4] -= mn;
    c[2] -= a[4];
    if(c[2]<0){
        cout<<"NO\n";   return;
    }
    cout<<"YES\n";
}

void Clear(){

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


    for(int i=0;i<3;i++){
        cin>>c[i];
    }
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
}
