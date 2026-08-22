# Write your MySQL query statement below
select product_name ,year ,price from 
Sales JOIN Product  
where Sales.product_id=Product.product_id