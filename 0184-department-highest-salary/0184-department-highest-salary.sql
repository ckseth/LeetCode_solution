# Write your MySQL query statement below
select d.name AS department, 
e.name AS Employee, 
e.salary AS Salary
from employee e


inner join department d on e.departmentId = d.id
WHERE (e.departmentId, e.salary) IN (
    SELECT departmentId, MAX(salary)
    FROM Employee
    GROUP BY departmentId
)