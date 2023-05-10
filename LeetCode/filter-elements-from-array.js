// https://leetcode.com/problems/filter-elements-from-array/

/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function (arr, fn) {
	let resultArray = [];

	for (let i = 0; i < arr.length; i++) {
		if (fn(arr[i], i)) {
			resultArray.push(arr[i]);
		}
	}

	return resultArray;
};