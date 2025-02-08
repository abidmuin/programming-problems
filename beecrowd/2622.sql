-- https://judge.beecrowd.com/en/problems/view/2622

SELECT customers.name
FROM customers
         JOIN legal_person ON customers.id = legal_person.id_customers;