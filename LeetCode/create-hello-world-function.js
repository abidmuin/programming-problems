// https://leetcode.com/problems/create-hello-world-function/

/**
 * @return {Function}
 */
var createHelloWorld = function () {
	return function (...args) {
		const output = "Hello World";
		return output;
	}
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */