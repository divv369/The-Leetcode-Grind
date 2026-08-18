# Write your MySQL query statement below
select name from Customer 
where referee_id=null  or id not in(select id from customer where referee_id=2 )