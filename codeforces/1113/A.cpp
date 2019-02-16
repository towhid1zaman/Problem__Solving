#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n,v;
        cin>>n>>v;
        int total = n-1;
        for(int i = 1; i<n-v;i++){
            total+=i;
        }
        cout<<total<<endl;
        return 0;
}
