/*
Max has a string S with length N. He needs to find the number of indices
i (1≤i≤N−11≤i≤N−1) such that the i-th character of this string is a consonant
and the i+1th character is a vowel. However,she is busy, so she asks for your help.
Note: The letters 'a', 'e', 'i', 'o', 'u' are vowels; all other lowercase English letters are consonants.
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
	int num;
	cin>>num;

	while(num--){
		int len;
		cin>>len;
		cin>>ws;
		string s;
		getline(cin,s);

		int count = 0;
		for(long int i=0; i<len; i++){
			if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
				continue;
			}
			else if(s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u'){
				count += 1;
			}
		}

		cout<<count<<endl;
	}


	return 0;
}