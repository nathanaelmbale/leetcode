/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    //sort the array 
    let sortedArray = nums.sort()

    for(let i =0; i<nums.length; i ++) {
        if(sortedArray[i] == sortedArray[ i + 1]) {
            console.log('true att' , i)
            return true
        }
    }
    return false
};

