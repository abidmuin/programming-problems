/* https://leetcode.com/problems/find-users-with-valid-e-mails/ */
SELECT user_id,
	name,
	mail
FROM Users
WHERE mail REGEXP '^[A-Za-z][A-Za-z0-9_.-]*@leetcode\\.com$';