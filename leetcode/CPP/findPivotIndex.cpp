class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int totalSum = 0;
      for(int i = 0; i < nums.size(); i++){
        totalSum += nums[i];
      }
      
      
      int lSum = 0;
      for(int i = 0; i < nums.size(); i++){
        if( (totalSum - (lSum + nums[i])) == lSum){
          return i;
        }
        
        lSum += nums[i];
      }
      
      
      return -1;
    }
};
