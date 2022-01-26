#include <bits/stdc++.h>
using namespace std ;

int main(){
	int n ;
	cin>>n ;
	bool y = true ;
	for (int i = 0; i < n; ++i)
	{
		/* code */int x ;
		cin>>x ;
		if (x == 1){
			cout<<"HARD" ;
			y = false ;
			break ;
		}
	}

	if(y){
		cout<<"EASY" ;
	}
	return 0 ;
}