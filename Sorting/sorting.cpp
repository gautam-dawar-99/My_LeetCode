#include<bits/stdc++.h>
using namespace std;

class Sorting{
    public:
    void bubble_sort(vector<int>& arr,int k){
	    for(int i=0;i<k;i++){
            bool isSorted=true;
            for(int j=0;j<k-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    isSorted=false;
                }
            }
            if(isSorted){
                break;
                    }
                }
            }

        void insertion_sort(vector<int>& arr,int n){
            for(int i=1;i<n;i++){
                int j=i;
                while(j>0 && arr[j-1]>arr[j]){
                    swap(arr[j-1],arr[j]);
                    j--;
                }
            }
        }

        void selection_sort(vector<int>& arr,int n){
            for(int i=0;i<n;i++){
                int min_index=i;
                for(int j=i;j<n;j++){
                    if(arr[j]<arr[min_index]){
                        min_index=j;
                    }
                }
                swap(arr[i],arr[min_index]);
            }
        }

        void merge(vector<int>& arr,int s,int mid,int e){
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
        void mergeSort(vector<int>& arr,int n,int start,int end)
        {
            if(start>=end){
                return;
            }
            int mid=start+(end-start)/2;
            mergeSort(arr,n,start,mid);
            mergeSort(arr,n,mid+1,end);
            merge(arr,start,mid,end);
        }

        void print_array(vector<int>& arr,int k){
            for(int i=0;i<k;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};
int main(){
    cout<<"Enter the size of the array : ";
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the "<<n<<" elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count;
    while(count!=5){
    cout<<"Sorting Project \n";
    cout<<"Choose sorting algorithm: \n";
    cout<<"1. Bubble Sort \n";
    cout<<"2. Insertion Sort \n";
    cout<<"3. Selection Sort \n";
    cout<<"4. Merge Sort \n";
    cout<<"5. Exit \n";
    cout<<"Enter the choice : ";
    cin>>count;

    Sorting s;

    switch(count){
        case 1:
            s.bubble_sort(arr, n);
            s.print_array(arr, n);
            break;
        case 2:
            s.insertion_sort(arr, n);
            s.print_array(arr, n);
            break;
        case 3:
            s.selection_sort(arr, n);
            s.print_array(arr, n);
            break;
        case 4:
            s.mergeSort(arr, n, 0, n-1);
            s.print_array(arr, n);
            break;
        case 5:
            break;
        default:
            cout<<"Invalid choice. Please try again.\n";
            break;
        }
    }
   
    return 0;

}