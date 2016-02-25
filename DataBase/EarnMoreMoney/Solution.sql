SELECT E1.Name
FROM Employee AS E1, Employee AS E2
WHERE E1.ManagerID = E2.Id AND E1.Salary > E2.Salary
