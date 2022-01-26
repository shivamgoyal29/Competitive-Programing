#include <bits/stdc++.h>
using namespace std ;

void Days(int n , int arr[] , int m){
	int l = 0 ;
	int r = n-1 ;
	while(l <= r ){
		int mid = (l+r)/2 ;
		if (arr[mid] <= m){
			l = mid + 1 ;
		}else{
			r = mid - 1 ;
		}

	}

	cout<<l<<endl ;
}

int main(){
	int n,q ;
	cin>>n ;
	int X[n] ;
	for (int i = 0; i < n; ++i)
	{
		/* code */int x ;
		cin>>x ;
		X[i] = x ;
	}
	cin>>q ;
	sort(X , X+n) ;

	for (int i = 0; i < q; ++i)
	{
		/* code */int m,ans ;
		cin>>m ;
		Days(n , X , m ) ;

	}

	return 0 ;
}