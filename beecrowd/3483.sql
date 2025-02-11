-- https://judge.beecrowd.com/en/problems/view/3483

(SELECT city_name, population
 FROM cities
 ORDER BY population DESC
 LIMIT 1 OFFSET 1)

UNION ALL

(SELECT city_name, population
 FROM cities
 ORDER BY population
 LIMIT 1 OFFSET 1);