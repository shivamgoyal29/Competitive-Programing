#include <bits/stdc++.h>
using namespace std ;

int main(){
	long long n ;
	cin>>n ;
	long long ans = 0 ;
	ans = n/2 ;
	if (n%2 != 0){
		ans = ans - n ;
	}

	cout<<ans ;
	return 0 ;
}