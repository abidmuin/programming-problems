-- https://judge.beecrowd.com/en/problems/view/2742

SELECT life_registry.name AS name, ROUND((life_registry.omega * 1.618), 3) AS "The N Factor"
FROM life_registry
         JOIN dimensions ON life_registry.dimensions_id = dimensions.id
WHERE dimensions.name IN ('C774', 'C875')
  AND life_registry.name LIKE 'Richard%'
ORDER BY omega;