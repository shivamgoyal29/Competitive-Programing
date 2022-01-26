#include <bits/stdc++.h>
using namespace std ;

int main(){
	int n,h , ans;
	cin>>n>>h;
	int a[n] ;
	ans = 0 ;
	for (int i = 0; i < n; ++i)
	{
		/* code */ int x ;
		cin>> x;
		if (x>h){
			ans +=2 ;

		}else{
			ans += 1 ;
		}

	}
	cout<<ans ;
	return 0 ;
}