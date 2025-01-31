-- https://judge.beecrowd.com/en/problems/view/2606

SELECT p.id AS product_id,
       p.name AS product_name
FROM products AS p
JOIN categories c ON p.id_categories = c.id
WHERE c.name LIKE 'super%';