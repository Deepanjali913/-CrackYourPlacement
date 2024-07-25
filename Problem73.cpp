class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0 ;
        int r = 0 ;
        int n = s.size();
        int maxfreq = 0 , maxlen = 0 ;
        unordered_map<int,int> hash ;
        while(r<n){
            hash[s[r]-'A']++;
            maxfreq = max(maxfreq , hash[s[r]-'A']);
            if(r-l+1 - maxfreq <= k){
                maxlen = max(maxlen , r-l+1);
                
            }
            else{
                hash[s[l]-'A']--;
                l++;
            }
            r++;
        }
        return maxlen ;
    }
};