# Write your MySQL query statement below
select fYS.product_id, fYS.first_year, s.quantity, s.price from 
(select s.product_id, min(s.year) as first_year from sales s group by s.product_id) as fYS
join sales s on fYS.product_id = s.product_id and fYS.first_year = s.year
order by fYS.product_id;