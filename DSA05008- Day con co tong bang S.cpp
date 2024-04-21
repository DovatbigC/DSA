#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s;
		cin>>n>>s;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int dem=0;
		int check=0;
		for(int i=n-1;i>=0;i--){
			int k=s;
			for(int j=i;j>=0;j--){
				if(k>=a[j]){
					dem++;
					k-=a[j];
				}
			}
			if(k==0){
				check=1;
			}
			
		}
		if(check==1){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
}
