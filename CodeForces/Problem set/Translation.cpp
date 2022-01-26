#include <bits/stdc++.h>
using namespace std ;

int main(){
	string a,b ;
	cin>>a>>b ;
	int i = 0 ;
	int j = a.length() ; j-- ;
	while(i < a.length()){
		if (a[i] != b[j]){
			cout<<"NO" ;
			break ;

		}else{
			i++ ;
			j-- ;
		}

	}
	if(i== a.length()){
		cout<<"YES" ;
	}	
	return 0 ;
}