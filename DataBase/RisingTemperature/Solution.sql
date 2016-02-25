SELECT w1.Id 
FROM Weather w1, Weather w2
WHERE w1.Temperature > w2.Temperature
AND TO_DAYS(w1.DATE) - TO_DAYS(w2.DATE) = 1


SELECT w1.Id
FROM Weather w1
INNER JOIN Weather w2
ON TO_DAYS(w1.DATE) = TO_DAYS(w2.DATE) + 1
WHERE w1.Temperature > w2.Temperature


SELECT w1.Id 
FROM Weather w1, Weather w2
WHERE subdate(w1.DATE, 1) = w2.DATE AND w1.Temperature > w2.Temperature
