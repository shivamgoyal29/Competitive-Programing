#include <bits/stdc++.h>
using namespace std ;

int main(){
	int a,b ;
	cin>>a>>b ;

	int ans = 0 ;
	while(b>= a){
		ans += 1 ;
		b *= 2 ;
		a *= 3 ;
	}	
	cout<<ans ;
	return 0 ;
}