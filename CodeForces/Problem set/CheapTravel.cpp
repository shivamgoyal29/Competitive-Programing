#include <bits/stdc++.h>
using namespace std ;

int main(){
	int n,m,a,b ;
	cin>>n>>m>>a>>b ;
	int ans = 0 ;

	if(a*m < b){
		ans+= n*a ;
	}else{
		ans += (n/m)*b ;
		if((n%m)*a < b){
			ans += (n%m)*a ;
		}else{
			ans += b ;
		}
	}

	cout<<ans ;


	return 0 ;
}