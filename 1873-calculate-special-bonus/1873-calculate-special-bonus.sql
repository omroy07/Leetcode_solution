# Write your MySQL query statement below
  select employee_id , salary * ( employee_id%2 ) * ( name not like 'M%') as bonus
    from employees
    order by employee_id;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna