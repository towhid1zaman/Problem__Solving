#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int result = 0;
    vector<int> vect(n);
    for(int i=0;i<n;i++)
    {
        cin >> vect[i];
        result += vect[i];
        cout << result/m <<" ";
        result %= m;
    }
    return 0;
}
