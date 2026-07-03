# Write your MySQL query statement below

SELECT u.name, SUM(t.amount) AS balance
FROM users u
LEFT JOIN transactions t
    ON u.account=t.account
GROUP BY u.name
HAVING SUM(t.amount)>10000

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna