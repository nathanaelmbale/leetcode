/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function (nums) {
    let l = 0
    let r = 1
    let sum = 0

    if (nums.length == 1) {
        return 1
    }

    for (let i = 0; r < nums.length; i++) {
        while (r < nums.length) {
            if (nums[l] >= nums[r]) {
                let temp = sum + nums[r]
                sum = Math.max(sum, temp)
                r++
            } else {
                let temp = sum + nums[r]
                l++
                r = l + 1
                sum = 0
            }
        }
    }

    return sum
};