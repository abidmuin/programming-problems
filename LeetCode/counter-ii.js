// https://leetcode.com/problems/counter-ii/

/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function (init) {
	const initialValue = init;
	let presentValue = init;

	function increment() {
		return ++presentValue;
	}

	function reset() {
		presentValue = initialValue;
		return presentValue;
	}

	function decrement() {
		return --presentValue;
	}

	return { increment, reset, decrement };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */