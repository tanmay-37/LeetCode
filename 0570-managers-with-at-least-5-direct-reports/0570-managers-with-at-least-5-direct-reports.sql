# Write your MySQL query statement below
select e2.name from Employee e1
join Employee e2 on e1.managerId = e2.id
group by e2.id
having count(e2.id) >= 5;