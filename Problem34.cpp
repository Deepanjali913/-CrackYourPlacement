class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st ;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]=='#' && !st.empty()){
                st.pop();
            }
            else if(s[i] != '#'){
                st.push(s[i]);
            }
        }
        string str1 ;
        while(!st.empty()){
            str1+=st.top();
            st.pop();
        }
        for(int i=0 ; i<t.size() ; i++){
            if(t[i]=='#'&& !st.empty()){
                st.pop();
            }
            else if(t[i] != '#'){
                st.push(t[i]);
            }
        }
        string str2 ;
        while(!st.empty()){
            str2+=st.top();
            st.pop();
        }
        cout<<str1<<" "<<str2;
        if(str1 == str2) return true ;
        
        else return false ;

        
    }
};