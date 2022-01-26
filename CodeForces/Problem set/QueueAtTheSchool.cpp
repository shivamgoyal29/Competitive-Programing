#include <bits/stdc++.h>
using namespace std ;

int main(){
	int n,t ;
	cin>>n>>t ;
	string a ;
	cin>>a ;
	while(t--){
		int i = 0 ;
		while(i < a.length()){
			if(a[i] == 'B' && a[i+1] == 'G'){
				a[i] = 'G' ;
				a[i+1] = 'B' ;
				i+= 2 ;


			}else{
				i++ ;
			}
		}

	}
	cout<<a ;

	return 0 ;
}