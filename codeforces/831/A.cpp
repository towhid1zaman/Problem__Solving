#include<bits/stdc++.h>

using namespace std;
typedef long long LL;
#define MAX 100005

int main(){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0; i<n;i++)
        {
            cin>>v[i];
        }
        int f=0;
        for(int i = 0; i < n - 1; i++){
		if(v[i] < v[i + 1] and f == 0){
		} else if(v[i] == v[i + 1] and f != 2){
			f = 1;
		}
		else if(v[i] > v[i + 1]){
			f = 2;
		}
		else {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
        return 0;
}


