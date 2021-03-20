/*
You will be given three numbers A,B,C .You can perform the following operation on these numbers
any number of times.You can take any integer from A, B, C and you can add or substract 1 from it.

Each operation cost 1sec of time(say). Now you have to determine the minimum time required to change
those numbers into an Arithmetic Progression. 
i.e B-A=C-B
*/


#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	while(num--){
		int a,b,c;
		cin >> a >> b >> c;


		if(b-a == c-b){
			cout << '0' << endl;
		}
		else{
			int diff = abs((b-a)-(c-b));
			// if diff is even
			if(diff%2==0){
				cout << diff/2 << endl;
			}
			else{
				cout << (diff+1)/2 << endl;
			}
		}
	}

	return 0;
}