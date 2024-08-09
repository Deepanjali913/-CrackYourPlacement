class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans =0 , preSum = 0 ;
        unordered_map<int,int> occ ;
        occ[0]=1;
        for(int i=0 ; i<nums.size() ; i++){
            preSum = (preSum + nums[i]%k + k)%k;
            ans += occ[preSum];
            occ[preSum]++; 
        }
        return ans ;
    }
};