# Write your MySQL query statement below
select round(avg(order_date = customer_pref_delivery_date) * 100, 2) as immediate_percentage
from 
(select min(order_date) as order_date, min(customer_pref_delivery_date) as customer_pref_delivery_date
from Delivery
group by customer_id) as orders;