#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    int n;
    cin >> n;
    int ara[n+5];
    for(int i=1; i<=n; i++) {
        cin >> ara[i];
    }
    int ans1=1,ans2=n,mn=abs(ara[1]-ara[n]);

    for(int i=1; i<=n; i++) {
        if(abs(ara[i]-ara[i+1])< mn) {
            ans1=i;
            ans2=i+1;
            mn=abs(ara[i]-ara[i+1]);
        }
    }
    cout << ans1 << " " << ans2 << endl;

    return 0;
}