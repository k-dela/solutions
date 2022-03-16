/**
 * @param {number[]} nums
 * @return {boolean}
 */
var isMonotonic = function(nums) {
    let isIncreasing;
    let isDecreasing;
    for(let i = 0; i < nums.length-1; i++){
        if(nums[i] > nums[i+1]){
            isIncreasing = false;
        }
    }
    
    if(isIncreasing !== false){
        isIncreasing = true;
        return isIncreasing;
    }
    
    for(let i = 0; i < nums.length-1;i++){
        if(nums[i] < nums[i+1]){
            isDecreasing = false;
        }
    }
    
    if(isDecreasing !== false){
        isDecreasing = true;
        return isDecreasing;
    }
    
    
    return false;
};
