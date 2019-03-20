#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
            int N;
            cin >> N;
           vector<int>a;
            while (N) {
                int n = N, m = 0, p = 1;
                while (n) {
                    if (n % 10) m += p;
                    n /= 10; p *= 10;
                }
                a.push_back(m);
                N -= m;
            }
            cout << a.size() <<endl;
            sort(a.begin(),a.end());
            for(int i = 0; i<a.size();i++){
                cout<<a[i]<<" ";
            }cout<<endl;
        return 0;
}



