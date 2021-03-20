/*
Sussutu is a world-renowned magician. And recently, he was blessed
with the power to remove EXACTLY ONE element from an array.

Given, an array A (index starting from 0) with N elements. Now, Sussutu
CAN remove only that element which makes the sum of ALL the remaining
elements exactly divisible by 7.

Throughout his life, Sussutu was so busy with magic that he could never
get along with maths. Your task is to help Sussutu find the first array
index of the smallest element he CAN remove.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long num;
	cin>>num;
	vector<int>arr;

	long long sum = 0;
	for(int i=0; i<num; i++){
		int n;
		cin>>n;
		arr.push_back(n);
		sum += arr[i];
	}

	int index=-1, curr_value = INT_MAX;
	for(int i=0; i<num; i++){
		if((sum-arr[i])%7==0 && arr[i] < curr_value){

			curr_value = arr[i];
			index = i;
			
		}
	}
	cout<<index;

	return 0;
}