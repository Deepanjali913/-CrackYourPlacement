class Solution {
public:
    int calculate(string s) {
        stack<int> st ;
        int curr = 0 ;
        char sign = '+';
        for(int i=0 ; i<s.size() ; i++){
            
            if(isdigit(s[i])){
                curr = curr*10 + (s[i] - '0');
            }
            if((!isdigit(s[i]) && s[i] != ' ') || i==s.size()-1){
                if(sign=='+'){
                    st.push(curr);
                }
                else if(sign=='-'){
                    st.push(-curr);
                }
                else if(sign=='*'){
                    int top = st.top();
                    st.pop();
                    st.push(top*curr);
                }
                else if(sign=='/'){
                    int top = st.top();
                    st.pop();
                    st.push(top/curr);
                }
                sign = s[i];
                curr = 0 ;
            }
        }
        int sum = 0 ;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum ;
        
    }
};