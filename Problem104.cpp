//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        map<string , vector<string>> mpp;
        int n = string_list.size();
        for(int i=0 ; i<n ; i++){
            string s = string_list[i];
            sort(s.begin(), s.end());
            mpp[s].push_back(string_list[i]);
        }
        vector<vector<string>> ans(mpp.size());
        int ind=0;
        for(auto x : mpp){
            auto v = x.second ;
            for(int i=0 ; i<v.size() ; i++){
                ans[ind].push_back(v[i]);
            }
            ind++;
        }
        return ans ;
        
    }
};