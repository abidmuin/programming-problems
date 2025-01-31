-- https://judge.beecrowd.com/en/problems/view/2609

SELECT c.name AS name,
       SUM(p.amount) AS total_amount
FROM products AS p
JOIN categories c ON p.id_categories=c.id
GROUP BY c.name
ORDER BY c.name