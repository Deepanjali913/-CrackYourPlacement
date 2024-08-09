class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0 ; i<n;i++){
            if(i==0 || nums[i-1] != nums[i]){
                sum(i+1,n-1,nums,0-nums[i],ans);
            }
        }
        return ans;
    }
    void sum(int i , int j , vector<int> &nums , int target,vector<vector<int>> &ans){
        
        int first=nums[i-1];
        while(i<j){
            if(nums[i]+nums[j]>target){
                j--;
            }
            else if(nums[i]+nums[j]<target){
                i++;
            }
            else{
                
                vector<int> res;
                res.push_back(first);
                res.push_back(nums[i]);
                res.push_back(nums[j]);
                ans.push_back(res);
                while(i<j && nums[i]==nums[i+1]){i++;}
                while(i<j && nums[j]==nums[j-1]){j--;}
                i++;j--;

            }
        }
    }
};