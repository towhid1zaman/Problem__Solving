#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << 8<< " " << n -8;
        }
        else
            cout << 9<< " " << n - 9;
    return 0;
}
