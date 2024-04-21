#include<bits/stdc++.h>
using namespace std;

int Min(int n){
	int so=0,m=1;
	while(n>0){
		if(n%10==6){
			so=5*m+so;
			n/=10;
			m*=10;
		}
		else {
			so=n%10*m+so;
			n/=10;
			m*=10;
		}	
	}
	return so;	
}

int Max(int n){
	int so=0,m=1;
	while(n>0){
		if(n%10==5){
			so=6*m+so;
			n/=10;
			m*=10;
		}
		else {
			so=n%10*m+so;
			n/=10;
			m*=10;
		}	
	}
	return so;	
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<Min(a)+Min(b)<<" "<<Max(a)+Max(b);
}
