DELETE a FROM Person a, Person b
WHERE a.Id > b.Id AND a.Email = b.Email
