#include <bits/stdc++.h>
using namespace std ;

int main(){
	string s ;
	cin>>s ;

	int count_lower , count_upper  ;
	count_upper = 0 ;
	count_lower = 0 ;
	for (int i = 0; i < s.length(); ++i)
	{
		/* code */
		if((int)s[i] <= 90){
			count_upper += 1 ;
			

		}else{
			count_lower+= 1 ;
		}
	}

	if(count_lower< count_upper){
		transform(s.begin() , s.end() , s.begin() , ::toupper) ;
		cout<<s ;
	}else{
		transform(s.begin() , s.end() , s.begin() , ::tolower) ;
		cout<<s ;
	}
	
	return 0 ;
}