// https://leetcode.com/problems/apply-transform-over-each-element-in-array/

/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function (arr, fn) {
	let resultArray = [];

	for (let i = 0; i < arr.length; i++) {
		resultArray.push(fn(arr[i], i));
	}

	return resultArray;
};
