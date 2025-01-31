-- https://judge.beecrowd.com/en/problems/view/2611

SELECT m.id AS id,
       m.name AS name
FROM movies m
JOIN genres g ON m.id_genres = g.id
WHERE g.description = 'Action';