//Permutations in array
class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
       sort(arr.begin() , arr.end());
       int i = 0 ;
       int j = 1 ;
       while(j<n){
           if(arr[j] - arr[i] == x){
               return 1 ;
           }
           else if(arr[j] - arr[i] > x){
               i++ ;
               if(i==j){
                   j++;
               }
               
           }
           else{
               j++;
           }
       }
       return -1 ;
        
    }
};