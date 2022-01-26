#include <bits/stdc++.h>
using namespace std ;

int main(){
	long long int n ;
	cin>>n ;
	int x = 0 ;
	while(n>0){
		int z ;
		z = n%10 ;
		n = n/10 ;
		if (z==4 || z == 7){
			x ++ ;
		}

	}

	if(x == 4 || x == 7){
		cout<<"YES" ;

	}else{
		cout<<"NO" ;
	}
	
	return 0 ;
}