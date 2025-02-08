-- https://judge.beecrowd.com/en/problems/view/2741

SELECT 'Approved: ' || name AS name, grade AS grade
FROM students
WHERE grade >= 7
ORDER BY grade DESC;