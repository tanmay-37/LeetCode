# Write your MySQL query statement below
SELECT S.USER_ID,ROUND(AVG(CASE WHEN C.ACTION = 'confirmed' THEN 1 ELSE 0 END),2) AS "confirmation_rate" FROM
Signups S LEFT JOIN Confirmations C
ON S.USER_ID = C.USER_ID
GROUP BY S.USER_ID;