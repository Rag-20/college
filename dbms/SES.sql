drop table student cascade;
drop table professor cascade;
drop table courses cascade;


create table student(roll_no integer primary key, name varchar(20), gender varchar(10), age integer, dob date,div varchar(9),constraint cdiv check(div in('A','B')));

insert into student values(10,'Amrita G','F',23,'2000-03-12','A');
insert into student values(11,'Amit G','M',28,'1996-03-01','B');
insert into student values(2058,'Bhavik R','M',18,'2004-07-11','A');
insert into student values(13,'Diya R','F',18,'2000-04-10','B');
insert into student values(14,'Avantika V','F',18,'2002-03-08','A');

select*from student;



create table professor(P_id integer primary key,P_name varchar(20),yr_join integer,dob date,qualification varchar(20),stu_prof integer references student(roll_no) on delete cascade on update cascade,constraint qu check(qualification in('Ph.d','Associate Professor')));

insert into professor values(10,'VVA',2025,'2013-04-13','Ph.d',10);
insert into professor values(11,'Dr. Amarjit K',1996,'1982-04-13','Ph.d',10);
insert into professor values(12,'NMP',2000,'1993-04-13','Associate Professor',11);
insert into professor values(13,'MCA',2000,'1992-04-13','Associate Professor',2058);
insert into professor values(14,'MK',2016,'1999-04-13','Ph.d',13);

select*from professor;

create table courses(course_code varchar(10) primary key, course_name varchar(20),std_cor integer references student(roll_no), prof_cour integer references professor(P_id));

insert into courses values('MTS1010','Real',10,13);
insert into courses values('MTS1011','English',2058,12);
insert into courses values('MTS1012','Algebra',10,13);
insert into courses values('MTS1013','Geometry',11,11);
insert into courses values('MTS1014','Analytic',13,11);

select* from courses;


select* from student where dob='2000-03-12';
select p_name from professor where yr_join>2012;
select course_name from courses where course_name like 'A%';
select* from student where gender like 'F';
select* from professor where dob='2013-04-13' and qualification like 'Ph.d';
select roll_no from student where age between 15 and 25;
select name,course_name from student,courses where gender like 'F' and courses.std_cor=student.roll_no;
select name from student,professor where P_name='Dr. Amarjit K' and professor.stu_prof=student.roll_no;
select course_name from courses,student where name='Amrita G' and courses.std_cor=student.roll_no;
select P_name,course_name from professor,courses where yr_join<2015 and professor.P_id=courses.prof_cour;
select course_name from courses,professor where qualification='Associate Professor' and professor.P_id=courses.prof_cour;


