/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    const trackerNums = {};
    
    for(let num of nums){
        if(trackerNums[num]){
            return true;
        }else{
            trackerNums[num] = true;
        }
    }
    
    
    return false;
};
