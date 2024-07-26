#include <iostream>
using namespace std;
void merge(int arr[],int s,int mid,int e){
    int n=mid-s+1;
    int m=e-mid;
    int a[n],b[m];
    for(int i=0; i<n; i++)
        a[i]=arr[s+i];
    for(int j=0; j<m; j++)
        b[j]=arr[mid+1+j];
    int i=0, j=0, k=s;
    while(i<n && j<m){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }
        else{
            arr[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n){
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<m){
        arr[k]=b[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int n,int start,int end)
{
    if(start>=end){
        return;
    }
    int mid=start+(end-start)/2;
    mergeSort(arr,n,start,mid);
    mergeSort(arr,n,mid+1,end);
    merge(arr,start,mid,end);
}
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, n, 0, n-1);
    cout << "Sorted array is \n";
    for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    return 0;
}