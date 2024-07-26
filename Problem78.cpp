class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generate(res,"",n,n);
        return res;
    }
    void generate(vector<string> &res,string str , int open , int closed){
        if(open==0 && closed==0){
            res.push_back(str);
            return;
        }
        if(open>0){
            generate(res,str+'(',open-1,closed);

        }
        if(closed>open){
            generate(res,str+')',open,closed-1);
        }
    }
};