#include<bits/stdc++.h>
using namespace std;

const int MOD=1e9+7;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n+1]={0};
		a[1]=a[0]=1;
		for(int i=2;i<=n;i++){
			for(int j=1;j<=min(k,i);j++){
				a[i] += a[i-j];
				a[i]%=MOD;
			}
		}
		cout<<a[n]<<endl;
	}
}
