/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let sum=init
    for(let i=0;i<nums.length;i++)
        {
            console.log(sum);
            sum=fn(sum,nums[i]);
        }
    return sum;
};