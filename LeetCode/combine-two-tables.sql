/* https://leetcode.com/problems/combine-two-tables/ */

/*ON*/
SELECT Person.firstName,
	Person.lastName,
	Address.city,
	Address.state
FROM Person
	LEFT JOIN Address ON Person.personId = Address.personId

/*USING*/
SELECT Person.firstName,
	Person.lastName,
	Address.city,
	Address.state
FROM Person
	LEFT JOIN Address USING (personId)