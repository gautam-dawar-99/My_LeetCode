int solve1(string s,int x,int y){
        stack<char> st;
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(!st.empty() && s[i]=='a' && st.top()=='b'){
                st.pop();
                ans+=y;
            }
            else{
                st.push(s[i]);
            }
        }

        string t="";

         while(st.size()>=1){
            t+=st.top();
            st.pop();
        }
        reverse(t.begin(),t.end());
        for(int i=0;i<t.size();i++){
            if(!st.empty() && (t[i]=='b' && st.top()=='a')){
                st.pop();
                ans+=x;
            }
            else 
                st.push(t[i]); 
        }

        return ans;
   }

   int solve2(string s,int x,int y){
        stack<char> st;
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(!st.empty() && s[i]=='b' && st.top()=='a'){
                st.pop();
                ans+=x;
            }
            else{
                st.push(s[i]);
            }
        }

        string t="";

         while(st.size()>=1){
            t+=st.top();
            st.pop();
        }
        reverse(t.begin(),t.end());
        for(int i=0;i<t.size();i++){
            if(!st.empty() && (t[i]=='a' && st.top()=='b')){
                st.pop();
                ans+=y;
            }
            else 
                st.push(t[i]); 
        }
       
        return ans;
   }
    int maximumGain(string s, int x, int y) {
       
        int ans=0;
        int n=s.size();
        vector<string> v;
        string temp="";
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='b'){
                temp+=s[i];
            }else{
                if(temp.size()>1)
                    v.push_back(temp);
                temp="";
            }
        }

        if(temp.size()>1)
            v.push_back(temp);
        //int  ans=0;
        for(auto i:v){
            //cout<<i<<" ";
            ans=ans+max(solve1(i,x,y),solve2(i,x,y));
        }
        return ans;
    }