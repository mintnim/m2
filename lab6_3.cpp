#include <iostream>
#include<string>
using namespace std;


char before(char x){
	if(x == 'A'){
		return 'Z';
	
	}
	
	
	if(x >= 'A' and x <= 'Z' ){
		return x - 1;
	}
	else{
		return '0';
	}
	
}
