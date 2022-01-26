#include <bits/stdc++.h>
using namespace std ;

int main(){

	string s ;
	cin>>s ;

	set<char> arr ;
	for (int i = 0; i < s.length(); ++i)
	{
		/* code */
		arr.insert(s[i]) ;
	}

	int a = arr.size() ;
	if(a%2 == 0){
		cout<<"CHAT WITH HER!"<<endl ;
	}else{
		cout<<"IGNORE HIM!"<<endl ;
	}
	
	return 0 ;
}