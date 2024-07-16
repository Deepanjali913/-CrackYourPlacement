//Leetcode 168 
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans ;
        while(columnNumber > 0){
            columnNumber -- ;
            int curr = columnNumber % 26 ;
            columnNumber = columnNumber / 26 ;
            ans.push_back('A' + curr);
        }
        reverse(ans.begin() , ans.end());
        return ans ;
        
    }
};