// https://leetcode.com/problems/array-reduce-transformation/

/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */

var reduce = function (nums, fn, init) {
	let result = init;

	nums.forEach(element => {
		result = fn(result, element);
	});

	return result;
};