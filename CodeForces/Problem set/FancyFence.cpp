#include <bits/stdc++.h>
using namespace std ;

int main(){
	int t ;
	cin>>t ;
	while(t--){
		double A ;
		cin>>A ;
		double x ;
		x = 360/(180 - A) ;
		

		int y = x ;
		
		if(y==x){
			cout<<"YES\n" ;

		}else{
			cout<<"NO\n";
		}
	}
	return 0 ;
}