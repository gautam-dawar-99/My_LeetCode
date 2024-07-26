// Given an array of size n, find the majority element. The majority element is the element that appears more than n/2 times.

// You may assume that the array is non-empty and the majority element always exist in the array.

// Input Format
// First line contains integer N (size of the array) followed by N more integers.

// Constraints
// Output Format
// Majority Element of array

// Sample Input
// 3
// 1 1 2
// Sample Output
// 1
// Explanation
// Number of 1's in the array is more than 3/2 , Hence majority element is 1

#include<bits/stdc++.h>
using namespace std;

int main () {
	int x,ans;
	cin>>x;
	int arr[x];
	for(int i=0;i<x;i++){
		cin>>arr[i];
	}
	map<int,int> mpp;

	for(int i=0;i<x;i++){
		mpp[arr[i]]++;
	}
	for(auto it:mpp){
		if(it.second>(x/2)){
			 ans=it.first;
		}
	}
	cout<<ans;
	return 0;
}