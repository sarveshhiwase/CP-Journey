-- DDL AND DML QUERIES

create table employees(
	emp_id int unsigned NOT NULL,
	name varchar(20) NOT NULL,
	salary int unsigned NOT NULL,
    dept_name varchar(20) NOT NULL,
	primary key(emp_id)
);

insert into employees values(1,'sarvesh hiwase',50000,'cse');
insert into employees values(2,'mayur jagtap',60000,'it');
insert into employees values(3,'samir morey',70000,'entc');
insert into employees values(4,'aaryan pantawane',80000,'electrical');
insert into employees values(5,'dhamma',90000,'mechanical');

-- SELECTION QUERIES
-- every row in table
select * from employees;
-- fetch in increasing salary
select * from employees order by salary DESC;
-- select specific person with id
select * from employees where emp_id = 5;

-- AGGREGRATE FUNCTIONS IN SQL
select max(salary) from employees;
select avg(salary) from employees;
select min(salary) from employees;
select count(*) from employees;

-- get all details of highest salary person
select * from employees where salary = (select max(salary) from employees);

-- get all distinct rows from employee table
select distinct emp_id,name,dept_name,salary from employees;

-- second highest salary person
select * from (select * from employees order by salary desc limit 2) as emps order by salary limit 1;

-- ROUND
ROUND(231.41232,2);
-- Rounds upto 2 decimal places

CEIL(213213.213);
-- Smallest greater number next to the given number

FLOOR(1239.2131);
-- Largest smaller number next to the given number

SUBSTRING(your_input_string,position,no.of.letters that you want to extract)
-- Gives me the substring of string

GROUP BY
-- Creates a group or buckets on some attribute, generally used with aggregate functions
-- one key thing to note is aggregate functions are performed on each group

ORDER BY
-- Sorts on some attribute, default ascending, EXPLICITLY mention DESC for descending

HAVING 
-- Generally used with aggregate functions as they cannot be used with where clause

-- LIKE Operator for pattern searching
-- Searching for pattern in strings 
-- Example names starting with vowels or anything
select * from employees where SUBSTR(name,1,1) not in ('a','e','i','o','u');
-- All employees who do not have a vowel as starting letter in their name


-- REPLACE(entity,want_to_be_replaced,to_be_replaced_with)
-- Replaces the entity with to_be_replaced_with 
-- For example
-- Name = SarveshHiwase
-- REPLACE(Name,'s','D')
-- Output = DarvedhHiwade
select REPLACE(name,'s','d') from employees where emp_id=1;

-- LIMIT
-- Limits the current query to output no.of rows that you have passed;
select * from (select * from employees order by salary desc limit 2) as emps order by salary limit 1;

select * from customers inner join (select * from city inner join country on city.country_id = country.id) as t on customer.city_id = t.id group by city_id having count(*) > (SELECT (( 1.0 *
       (SELECT COUNT(*)
        FROM customers AS ci) /
       (SELECT COUNT(*)
        FROM city AS c) ) * 100) as average);