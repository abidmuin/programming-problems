-- https://judge.beecrowd.com/en/problems/view/3480

SELECT c1.queue, c1.id AS left_seat, c2.id AS right_seat
FROM chairs c1
         JOIN chairs c2
              ON c1.queue = c2.queue
                  AND c1.id + 1 = c2.id
WHERE c1.available = TRUE
  AND c2.available = TRUE
ORDER BY c1.id;