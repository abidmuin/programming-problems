-- https://judge.beecrowd.com/en/problems/view/2739

SELECT name, EXTRACT(DAY FROM payday)::INTEGER AS day
FROM loan;