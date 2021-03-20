/*
Bob's crush's name starts with a vowel. That's the reason Bob loves vowels too much.
 He calls a string "lovely streither all the lowercase vowels or all the uppercase 
 vowels or both, else he calls that string "ugly string". 
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
	int num;
	cin >> num;
	cin >> ws;

	for(int i=0; i<num; i++){
		string s;
		getline(cin, s);

		string sm = "aeiou", up = "AEIOU";
		int scount=0, ucount=0;

		for(int i=0; i<sm.length(); i++){
			for(int j=0; j<s.length(); j++){
				if(sm[i] == s[j]){
					scount++;
					break;
				}
			}
		}

		for(int i=0; i<up.length(); i++){
			for(int j=0; j<s.length(); j++){
				if(up[i] == s[j]){
					ucount++;
					break;
				}
			}
		}
		
		if(scount==5 || ucount==5){
			cout << "lovely string" <<endl;
		}
		else{
			cout << "ugly string" <<endl;
		}
	}
    return 0;
}