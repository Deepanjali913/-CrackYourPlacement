class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans ;
        unordered_map<string , vector<string>> mpp;
        int n = strs.size();
        for(int i=0 ; i<n ; i++){
            string temp = strs[i];
            sort(strs[i].begin() , strs[i].end());
            mpp[strs[i]].push_back(temp);
        }
        for(auto it = mpp.begin() ; it != mpp.end() ; it++){
            ans.push_back(it->second);
        }
        return ans ;
    }
};