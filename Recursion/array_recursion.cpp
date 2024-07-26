#include <iostream>
using namespace std;

void index(int arr[],int n,int i,int ele){
    if(i==n) return ;
    if(arr[i]==ele){
        cout<<i<<endl;
        return ;
    }
     index(arr,n,i+1,ele);
}
void index_yes(int arr[],int n,int i,int ele){
    if(i==n) return ;
    if(arr[i]==ele){
        cout<<"true"<<endl;
        return ;
    }
     index_yes(arr,n,i+1,ele);
}


bool contains_element(int arr[],int n,int i,int ele){
    if(i==n)
        return false;
    if(arr[i]==ele){
        return true;
    }
    return contains_element(arr,n,i+1,ele);
}

int first_index(int arr[],int n,int i,int ele){
    if(i==n){
        return -1;
    }
    if(arr[i]==ele){
        return i;
    }
    return first_index(arr,n,i+1,ele);
}

int last_index(int arr[],int n,int i,int ele){
    if(i==-1){
        return -1;
    }
    if(arr[i]==ele){
        return i;
    }
    return last_index(arr,n,i-1,ele);

}
void print_all_indices(int arr[],int n,int i,int ele){
    if(i==n) return ;
    if(arr[i]==ele){
        cout<<i<<" ";
    }
    print_all_indices(arr,n,i+1,ele);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ele;
    cin>>ele;
    index(arr,n,0,ele);
    cout<<endl;
    index_yes(arr,n,0,ele);
    cout<<endl;
    cout<<contains_element(arr,n,0,ele);
    cout<<endl;

    int ans=first_index(arr,n,0,ele);
    if(ans==-1){
        cout<<"Element "<<ele<<" not found"<<endl;
    }
    else{
        cout<<"First index of "<<ele<<" is "<<ans<<endl;
    }
    cout<<endl;

    ans=last_index(arr,n,n-1,ele);
    if(ans==-1){
        cout<<"Element "<<ele<<" not found"<<endl;
    }
    else{
        cout<<"Last index of "<<ele<<" is "<<ans<<endl;
    }
    cout<<endl;
    print_all_indices(arr,n,0,ele);

    return 0;
}