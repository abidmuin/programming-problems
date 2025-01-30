-- https://judge.beecrowd.com/en/problems/view/2604

SELECT id,
	name
FROM products
WHERE price < 10
	OR price > 100