#include <bits/stdc++.h>
using namespace std ;

int main(){

	int n ;
	cin>>n ;
	int max = 0 ;
	int capacity = 0 ;
	while(n--){
		int a,b ;
		cin>>a>>b ;
		capacity -= a ;
		capacity += b ;
		if (capacity>max){
			max = capacity ;
		}

	}

	cout<<max ;
	
	return 0 ;
}