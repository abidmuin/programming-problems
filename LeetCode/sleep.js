// https://leetcode.com/problems/sleep/

/**
 * @param {number} millis
 */

async function sleep(millis) {
	return new Promise((resolve, reject) => {
		if (typeof millis !== "number" || Number.isNaN(millis)) {
			reject(new Error('Invalid argument. Expected a number.'));
		} else {
			setTimeout(resolve, millis);
		}
	});
}

/**
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */