#include <bits/stdc++.h>
using namespace std ;

int main(){
	string a,b,c ;
	cin>>a>>b ;
	c = "" ;

	for (int i = 0; i < a.length(); ++i)
	{
		/* code */

		if (a[i] != b[i]){
			c += "1" ;
		}else{
			c += "0" ;
		}
	}

	cout<<c ;

	return 0 ;
}