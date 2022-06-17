class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_set<int> tracker;
      
      for(int i = 0; i < nums.size(); i++){
        if(tracker.find(nums[i]) == tracker.end()){
          tracker.insert(nums[i]);
        }else{
          return true;
        }
      }
      
      return false;
    }
};
