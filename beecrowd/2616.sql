-- https://judge.beecrowd.com/en/problems/view/2616

SELECT c.id AS id,
       c.name AS name
FROM customers c
LEFT JOIN locations l ON c.id = l.id_customers
WHERE l.id_customers ISNULL
ORDER BY id;