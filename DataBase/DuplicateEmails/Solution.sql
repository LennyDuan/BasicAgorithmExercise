SELECT Email FROM Person
GROUP BY Email having count(*) > 1


SELECT DISTINCT a.Email FROM Person a
JOIN Person b
ON a.Email = b.Email
WHERE a.Id <> b.Id

SELECT a.Email
FROM Person a
WHERE EXISTS(
	SELECT 1
	FROM Person b
	WHERE a.Email = b.Email
	LIMIT 1, 1
)



