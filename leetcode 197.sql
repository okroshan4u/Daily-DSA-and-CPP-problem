# Write your MySQL query statement below
select w1.id 
from weather w1
inner join weather w2
where datediff(w1.recordDate, w2.recordDate) = 1  #here in this datediff(w1.recordDate, w2.recordDate) expression w1 is before w2 hence it clarifies that w1 is one day ahead of w2 that is w1 is current date and w2 is previous date
And w1.temperature > w2.temperature