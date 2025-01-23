# Write your MySQL query statement below
select S.student_id, S.student_name, sb.subject_name, count(E.student_id) as attended_exams
from Students S join Subjects sb
left join Examinations E on S.student_id = E.student_id and sb.subject_name = E.subject_name
group by S.student_id, S.student_name, sb.subject_name
order by S.student_id, sb.subject_name;