
#include <iostream> 
using namespace std; 


int checkPalindrome(string str) 
{ 
	 
	int len = str.length(); 
	
h 
	for (int i = 0; i < len / 2; i++) { 
		
	 
		if (str[i] != str[len - i - 1]) 
			return false; 
	} 
	
	
	return true; 
} 


int main() 
{ // taking number as string 
	string st 
		= "112233445566778899000000998877665544332211"; 
	if (checkPalindrome(st) == true) 
		cout << "Yes"; 
	else
		cout << "No"; 
	return 0; 
} 

