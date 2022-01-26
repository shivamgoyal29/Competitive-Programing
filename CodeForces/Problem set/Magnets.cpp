#include <bits/stdc++.h>
using namespace std ;

int main(){
	int n , ans , q ;
	cin>>n>>q ;
	ans = 1 ;
	for (int i = 1; i < n; ++i)
	{
		/* code */
		int x ;
		cin>> x ;
		if(x!= q){
			q = x ;
			ans ++ ;
		}

	}
	cout<<ans ;
	return 0 ;
}