// Replace Spaces
// Easy
// 0/40
// Average time to solve is 15m
// Contributed by
// 152 upvotes
// Asked in companies
// Problem statement
// You have been given a string 'STR' of words. You need to replace all the spaces between words with “@40”.

#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
	string temp="";
	for(int i=0;i<str.length();i++){
		if (str[i]==' '){
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		}
		else{
			temp.push_back(str[i]);
		}
	}
	return temp;
}