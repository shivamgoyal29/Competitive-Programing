#include <bits/stdc++.h>
using namespace std ;

int main(){
	int k,n,w ;
	cin>>k>>n>>w ;
	int ans = (2*k + (w-1)*(k)) ;
	ans *= w ;

	ans /= 2 ;
	ans -= n ;
	if (ans>= 0) {
	cout<<ans ;}
	else{
		cout<<0 ;
	}

	return 0 ;
}