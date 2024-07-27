class Solution {
public:
    string helper(int &ind , string str){
        int n = 0 ;
        string ans = "" ;
        while(ind < str.size()){
            char curr = str[ind];
            if(curr>='0' && curr <='9'){
                n = n*10 + curr -'0';
            }
            else if(curr =='['){
                string temp = helper(++ind , str);
                while(n>0){
                    ans+=temp;
                    n--;
                }

            }
            else if(curr == ']'){
                return ans ;
            }
            else{
                ans += curr ;
            }
            ind++;
        }
        return ans ;
    }

    string decodeString(string s) {
        int i = 0 ;
        string ans = helper(i , s);
        return ans;
        
    }
};