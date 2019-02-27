#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define MAX 100005
bool isPrime(int x){
        if(x<2) return false;
        if(x==2) return true;
        for(int i = 2; i*i <=x;i++)
        {
            if(x%i==0){
                return false;
            }
        }
        return true;
}
int main(){

        vector<int>prime;
        for(int i = 1; i<=50; i++){
            if(isPrime(i)){
                prime.push_back(i);
            }
        }
        int n , m;
        cin>>n;
        cin>>m;
        bool f  = false;
        for(int i = 0; i<prime.size();i++){
            if(prime[i]==n and prime[i+1]==m){
                f = true;
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

        return 0;
}
