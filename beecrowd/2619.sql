-- https://judge.beecrowd.com/en/problems/view/2619

SELECT products.name AS product_name, providers.name AS provider_name, products.price AS product_price
FROM products
         LEFT JOIN providers ON products.id_providers = providers.id
         LEFT JOIN categories ON products.id_categories = categories.id
WHERE products.price > 1000.00
  AND categories.name = 'Super Luxury';