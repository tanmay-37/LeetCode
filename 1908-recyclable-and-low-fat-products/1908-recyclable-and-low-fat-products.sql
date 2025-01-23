# Write your MySQL query statement below
select p1.product_id from Products p1 
join Products p2 on p1.product_id = p2.product_id 
where p1.low_fats = 'Y' and p2.recyclable = 'Y' ;