-- https://judge.beecrowd.com/en/problems/view/2740

(SELECT 'Podium: ' || team AS name
 FROM league
 WHERE position <= 3)
UNION ALL
(SELECT 'Demoted: ' || team AS name
 FROM league
 WHERE position IN ((SELECT MAX(position) FROM league),
                    (SELECT MAX(position) - 1 FROM league)));