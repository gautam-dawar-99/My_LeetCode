// Sort just 0 and 1

// Input Format
// A line containing N number of 0s and 1s Next line follows a long sequence of 0 and 1 seperated by space

// Constraints
// N will not exceed 10^7

// Output Format
// Sorted Sequence

// Sample Input
// 7
// 1 0 0 1 1 0 1
// Sample Output
// 0 0 0 1 1 1 1

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int tmp[n];
	int k=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=1){
			tmp[k++]=arr[i];
		}
	}
	for(int i=0;i<k;i++){
		arr[i]=tmp[i];
	}
	for(int i=k;i<n;i++){
		arr[i]=1;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}