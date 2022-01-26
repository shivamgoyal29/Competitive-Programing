#include <bits/stdc++.h>
using namespace std ;

int main(){
	int n , ans,x1,x2,x3,x4 ;
	ans = 0;
	x1 = 0 ;
	x2 = 0 ;
	x3 = 0 ;
	x4 = 0 ;
	cin>>n ;


	for (int i = 0; i < n; ++i)
	{
		/* code */int x ;
		cin>>x ;
		if(x == 1){
			x1++ ;}else if(x == 2){
				x2++ ;

			}else if(x == 3){
				x3++ ;
			}else{
				x4++ ;
			}

	}

	ans += x4 ;
	ans += x2/2 ;
	if(x2%2 != 0){
		x1-= 2;
		ans ++ ;
	}

	if(x1> x3){
		ans += x3 ;
		ans += (x1 - x3)/4 ;
		if ((x1-x3)%4 != 0){
			ans ++ ;
		}
	}else{
		ans += x3 ;
	}

	cout<<ans ;


	return 0 ;
}