#include <bits/stdc++.h>
using namespace std ;

int main(){
	int n ;
	cin>> n ;
	string A ;
	cin>>A ;
	int i = 0 , a = 0 , d = 0  ;

	while(n--){
		if (A[i] == 'A'){
			a ++ ;
			i++ ;
		}else{
			d++ ;
			i++ ;
		}


	}

	if(a>d){
		cout<<"Anton" ;
	}else if(d>a){
		cout<<"Danik" ;
	}else{
		cout<<"Friendship" ;
	}
	
	return 0 ;
}