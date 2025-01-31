-- https://judge.beecrowd.com/en/problems/view/2613

SELECT m.id AS id,
       m.name AS name
FROM movies m
JOIN prices p ON m.id_prices = p.id
WHERE p.value < 2.00