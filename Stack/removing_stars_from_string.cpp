string removeStars(string s) {
        stack<char> st;
        int i=0;
        while(i<s.size()){
            if(s[i]!='*')
                st.push(s[i]);
            else{
                st.pop();
            }
            i++;
        }
        
        string str="";

        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
}

    //      int i=0,j=0;
    //     while(i<s.size()){
    //         if(s[i]=='*'){
    //             j--;
    //         }else{
    //             s[j++]=s[i];
    //         }
    //         i++;
    //     }
    //    return s.substr(0,j);
    }