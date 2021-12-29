/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    for(let i = 0; i < nums.length; i++){
        for(let j = 0; j < nums.length; j++){
            if(j != i){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
    }
    
    return false;
};
