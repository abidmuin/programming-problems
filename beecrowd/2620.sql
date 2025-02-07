-- https://judge.beecrowd.com/en/problems/view/2620

SELECT customers.name AS customer_name, orders.id AS order_id
FROM orders
         RIGHT JOIN customers on orders.id_customers = customers.id
WHERE orders_date BETWEEN '2016-01-01' AND '2016-06-30';