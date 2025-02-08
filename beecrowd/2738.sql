-- https://judge.beecrowd.com/en/problems/view/2738

SELECT candidate.name                                                                          AS name,
       ROUND((((score.math * 2) + (score.specific * 3) + (score.project_plan * 5)) / 10.0), 2) AS avg
FROM candidate
         JOIN score ON candidate.id = score.candidate_id
ORDER BY avg DESC;