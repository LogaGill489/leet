/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    let k = 0;
    for (var i = 0; i < nums.length; i++) {
        if (nums[i] != val) nums[k++] = nums[i];
    }
    return k;
};

console.log(removeElement([3, 2, 2, 3], 3)); // 2