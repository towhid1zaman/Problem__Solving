#include<bits/stdc++.h>
using namespace std;
int main()
    {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int s = a + b + c + d;
        int ans = 1;
        for(int i = 1; i < n; ++i){
            cin >> a >> b >> c >> d;
            if(a + b + c + d > s) ++ans;
        }
    cout << ans;

}