-- https://judge.beecrowd.com/en/problems/view/2618

SELECT products.name AS product_name, providers.name AS provider_name, categories.name AS category_name
FROM products
         LEFT JOIN providers ON products.id_providers = providers.id
         LEFT JOIN categories ON products.id_categories = categories.id
WHERE providers.name = 'Sansul SA'
  AND categories.name = 'Imported';