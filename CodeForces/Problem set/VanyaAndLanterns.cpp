#include <bits/stdc++.h>
using namespace std ;

int main(){
	long long n,l ;
	cin>>n>>l ;
	long long A[n] ;
	for (int i = 0; i < n; ++i)
	{
		/* code */long long a ;
		cin>>a ;
		A[i] = a ;
	}

	sort(A , A+n) ;
	
	double max_distance = A[0] ;
	for (int i = 0; i < n-1; ++i)
	{
		/* code */
		double x = abs(A[i] - A[i+1]);
		x /= 2 ;
		
		if (max_distance< x)
		{
			/* code */
			max_distance = x ;
		}

		
	}

	double x =abs(A[n-1] - l) ;
	if (max_distance< x)
	{
		/* code */max_distance = x ;
	}

	cout.precision(14) ;

	cout<<max_distance ;
}