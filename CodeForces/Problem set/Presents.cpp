#include <bits/stdc++.h>
using namespace std ;

int main(){
	int n ;
	cin>>n ;
	int A[n] ;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int x ;
		cin>>x ;
		A[i] = x ;
	}

	for (int i = 1; i <=n; ++i)
	{
		/* code */
		for (int j = 0; j < n; ++j)
		{
			if(A[j] == i){
			cout<<j+1<<" " ;
			break ;
		}
		}

	}
	return 0 ;
}