// Take an input N, a number. Take N more inputs and store that in an array. Take an input target, a number

// a. Write a recursive function which prints subsets of the array which sum to target.

// b. Write a recursive function which counts the number of subsets of the array which sum to target. Print the value returned.

// Input Format
// Take an input N, a number. Take N more inputs and store that in an array. Take an input target, a number

// Constraints
// None

// Output Format
// Display the number of subsets and print the subsets in a space separated manner.

// Sample Input
// 3
// 1
// 2
// 3
// 3
// Sample Output
// 1 2  3
// 2
// Explanation
// Add 2 spaces between 2 subset solutions


#include<bits/stdc++.h>
using namespace std;
int cnt;
void funcn(int arr[],int i,vector<int> output,int target,int n){
	// int n=arr.size();
	if(i==n){
		int x=output.size();
		int sum=0;
		for(int j=0;j<output.size();j++){
			sum+=output[j];
		}
		if(sum==target){
			for(int k=0;k<output.size();k++){
				cout<<output[k]<<" ";
			}
			cout<<"  ";
			cnt++;
		}
		return ;
	}
	output.push_back(arr[i]);

	funcn(arr,i+1,output,target,n);

	output.pop_back();
	
	funcn(arr,i+1,output,target,n);


}
int main() {
	vector<int> output;
	int n;
	cin>>n;
	cnt=0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	funcn(arr,0,output,target,n);
	cout<<endl<<cnt;

	return 0;
}