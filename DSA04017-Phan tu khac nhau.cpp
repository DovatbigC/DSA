#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		long long a[n],b[n-1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int vitri=-1;
		for(int i=0;i<n-1;i++){
			cin>>b[i];
			if(b[i]!= a[i] && vitri==-1){
				vitri=i;
			}
		}
		cout<<vitri+1<<endl;
	}
}
