-- https://judge.beecrowd.com/en/problems/view/2744

SELECT id, password, MD5(password) AS MD5
FROM account;