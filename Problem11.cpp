//Leetcode 14
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int ans = strs[0].length();
        for(int i=1 ; i<strs.size() ; i++){
            int j = 0 ;
            while(j < strs[i].length() && strs[0][j]==strs[i][j]) j++;
            ans = min(ans , j);
        }
        string res  = strs[0].substr(0 , ans);
        return res ;
    }
};