#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k=3;
    int sum=0;
    int maxSum=0;
    for(int i=0; i<k; i++){
        sum+=arr[i];
        maxSum=max(maxSum,sum);
        cout<<sum<<"  ";
    }
    cout<<endl<<endl;
    cout<<"Maximum sum of "<<k<<" consecutive elements: "<<maxSum<<endl;
    cout<<endl;

    maxSum=sum;
    int i=0;
    int j=k;

    while(j<n){
        sum-=arr[i];
        // cout<<sum<<"  "<<endl;
        sum+=arr[j];
        cout<<sum<<"  "<<endl;
        i++;
        j++; 
        maxSum=max(maxSum,sum);
    }

    cout<<"Maximum sum of consecutive elements: "<<maxSum<<endl;

    return 0;
}