# Write your MySQL query statement below


SELECT e.name as Employee
from employee e
inner join employee m
ON e.managerid=m.Id
where e.salary>m.salary; 