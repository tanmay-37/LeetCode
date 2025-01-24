# Write your MySQL query statement below
select p.product_id, ifnull(round(sum(p.price*s.units)/sum(s.units), 2),0) as average_price
from  Prices p left join UnitsSold s
on p.product_id = s.product_id
and purchase_date between start_date and end_date
group by product_id;