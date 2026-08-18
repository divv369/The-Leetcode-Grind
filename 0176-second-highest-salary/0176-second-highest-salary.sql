# Write your MySQL query statement below
select  MAX(salary) as SecondHighestSalary from 
Employee 
where id not in (select id from employee 
where salary=(select Max(salary) from employee))
