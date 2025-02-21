# Write your MySQL query statement below
select e.employee_id, e.name, count(emp.reports_to) as reports_count, round(avg(emp.age)) as average_age 
from Employees e
inner join employees emp on e.employee_id = emp.reports_to
where e.employee_id is not null
group by e.employee_id, e.name
order by employee_id;