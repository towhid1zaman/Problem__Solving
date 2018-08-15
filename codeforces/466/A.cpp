 #include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

//    ll a[4];
//    set<int> s;
//    for(ll i= 0; i<4; i++)\
//    {
//        cin>>a[i];
//        s.insert(a[i]);
//    }
//     if(a[0] ==  a[2] and a[2] == a[3] )
//    {
//        cout<<a[0] * a[3]<<endl;
//        return 0;
//    }
//    if(s.size() == a[4 -1])
//    {
//        cout<<a[0] + s.size()<<endl;
//        return 0;
//    }
//    if(s.size() != a[3])
//    {
//        cout<<s.size() * a[4 - 1]<<endl;
//        return 0;
//    }
    ll n,m,a,b,baki;
    cin>>n>>m>>a>>b;
       if(m * a > b)
    {
        baki = (n % m) * a;
       // cout<<baki;
        if(baki > b)
            cout<<n/m*b+b<<endl;
        else
            cout<<n/m*b+baki<<endl;
    }
    else
        cout<<n*a<<endl;

//    cout<<s.size()<<endl;
    return 0;
}
