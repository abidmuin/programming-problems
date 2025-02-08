-- https://judge.beecrowd.com/en/problems/view/2623

SELECT products.name as product_name, categories.name as category_name
FROM products
         JOIN categories ON products.id_categories = categories.id
WHERE products.amount > 100
  AND products.id_categories IN (1, 2, 3, 6, 9);