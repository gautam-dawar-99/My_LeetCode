#include<iostream>
#include<cstring>
#include<algorithm> // to use sort function
using namespace std;
int main(){
  // string str; //declarartion
  // str = "abc"; //initialization
  //  string k = "abcd"; //declaration +initialization
  
   //string s;
  //getline(cin,nameof string, delimiter)
  //default value of delimiter ='\n';
 // getline(cin,s,'$');
  //cout<<s<<endl;
   
   //Concatenation
   string s1 ="abc";
   string s2="abd";
   string s3 = s1 + s2;
  //  cout<<s3<<endl;
   
   //clear -> to delete
    // s3.clear();
    // cout<<s3<<endl;
   
   //.empty()->check empty or not
    // cout<<s3.empty()<<endl;
    
    //compare -> to compare two strings
    // string s1="abcd";
    // string s2="abc";
    // int ans = s1.compare(s2);
    // cout<<ans<<endl;
    
    // find(string) ->index of first occurence
    cout<<s3.find("abd")<<endl;
    
    //size() -> find length of string
    cout<<s3.size()<<endl;
    
    //substr(pos,len) -> to find substring
    cout<<s3.substr(2,4)<<endl;
    
    
    //string -> to convert integer
    string num = "3457";
    int number = stoi(num); // stoi means string to integer
    cout<<number<<endl; 
    
    //integer ->  to convert string
    int n = 8756;
    string numtoStr = to_string(n);
    cout<<numtoStr<<endl;
    
    //sort(str.begin(),str.end());
    // sort(s3.begin(),s3.end());
    // cout<<s3<<endl;
    
    //transform() -> to transform from lowercase to uppercase or viceversa
    // transform(s3.begin(),s3.end(),s3.begin(),::toupper);
    // cout<<s3<<endl;
    
    //   transform(s3.begin(),s3.end(),s3.begin(),::tolower);
    //   cout<<s3<<endl;
      
      
      //int arr[5] = {1,2,3,4,5}
      string arr[5] = {"abc","abd","hello","ragini","leet"};
      
      cout<<"Before Sort"<<endl;
      for(int i=0;i<5;i++){
      cout<<arr[i]<<endl;
      }
      
      //sort
      cout<<"after sort"<<endl;
      sort(arr,arr+5);
       for(int i=0;i<5;i++){
      cout<<arr[i]<<" ";
      }
    
  
return 0;
}