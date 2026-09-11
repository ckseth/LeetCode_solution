# Write your MySQL query statement below
select class from courses
group by class having count(class) >= 5;

-- SELECT class, aggregate_function(column2)
-- FROM table_name
-- WHERE row_condition
-- GROUP BY column1
-- HAVING group_condition;
