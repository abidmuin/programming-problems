// https://leetcode.com/problems/curry/

/**
 * @param {Function} fn
 * @return {Function}
 */
var curry = function (fn) {
	return function curried() {
		if (args.length >= fn.length) {
			return fn(...args);
		} else {
			return function (...restArgs) {
				return curried(...args, ...restArgs);
			};
		}
	};
};

/**
 * function sum(a, b) { return a + b; }
 * const csum = curry(sum);
 * csum(1)(2) // 3
 */