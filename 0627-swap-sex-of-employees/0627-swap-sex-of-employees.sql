-- # Write your MySQL query statement below
-- UPDATE salary
-- SET sex = CASE 
--     WHEN sex = 'f' THEN 'm'
--     WHEN sex = 'm' THEN 'f'
--     ELSE sex 
-- END;


-- UPDATE salary
-- SET sex = IF(sex = 'f', 'm', 'f');

UPDATE salary
SET sex = CASE sex
    WHEN 'f' THEN 'm'
    WHEN 'm' THEN 'f'
END;