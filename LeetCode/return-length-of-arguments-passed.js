// https://leetcode.com/problems/return-length-of-arguments-passed/

/**
 * @return {number}
 */
var argumentsLength = function (...args) {
	const totalArguments = args.length;

	return totalArguments;
};

/**
 * argumentsLength(1, 2, 3); // 3
 */