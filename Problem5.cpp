//Leetcode 169 
//Majority Element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        int count = 0 ;
        int num = nums[0];
        for(int i=1 ; i<n ; i++){
            
            if(nums[i]==num){
                count++;
            }
            else if(count>0){
                count--;
            }
            else{
                num = nums[i];
            }
        }
        return num ;
        
    }
};