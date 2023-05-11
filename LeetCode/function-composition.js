// https://leetcode.com/problems/function-composition/

/**
 * @param {Function[]} functions
 * @return {Function}
 */

var compose = function (functions) {
	let functionsLength = functions.length;

	if (functionsLength === 0) {
		return function (x) {
			return x;
		}
	}

	return function (x) {
		let result = x;

		for (let i = functionsLength - 1; i >= 0; i--) {
			result = functions[i](result);
		}

		return result;
	}
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */