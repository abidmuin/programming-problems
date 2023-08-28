/* https://leetcode.com/problems/patients-with-a-condition/ */
SELECT *
FROM Patients
WHERE CONDITIONS LIKE '% DIAB1%'
	OR CONDITIONS LIKE 'DIAB1%';