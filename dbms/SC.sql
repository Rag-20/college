drop table emplo cascade;
drop table project cascade;
drop table client cascade;
drop table manager;


create table client(cid int primary key, c_name varchar(20),domain varchar(20), ori_country varchar(20));

insert into client values(110,'Suiez tech','water treat','India');
insert into client values(111,'Jelz tech','water treat','England');
insert into client values(112,'Fizer','Vaccine','France');
insert into client values(113,'KG','Sport','Australia');
insert into client values(114,'Covax','biology','India');

select*from client;


create table project(pid int primary key,p_name varchar(20),duration int,cl_pro int references client(cid));

insert into project values(10,'sky',2,110);
insert into project values(11,'bomb',5,112);
insert into project values(12,'sun',4,113);
insert into project values(13,'moon',3,110);
insert into project values(14,'light',2,114);

select*from project;


create table emplo (eid int primary key, e_name varchar(20),age int, designation varchar(20),yr_join int,pro_emp int references project(pid));

insert into emplo values(1,'Shastri',23,'analyst',2014,10);
insert into emplo values(2,'Shashi',28,'analyst',2012,11);
insert into emplo values(3,'Diya',33,'eng1',2000,10);
insert into emplo values(4,'Dansri',25,'eng2',2004,12);
insert into emplo values(5,'Aarti',29,'eng1',2002,13);

select*from emplo;


create table manager(mid int primary key, mtype varchar(20), team_size int,em_man int references emplo(eid) unique);

insert into manager values(1110,'HR',6,1);
insert into manager values(1111,'HR',5,3);
insert into manager values(1112,'Head',2,2);
insert into manager values(1113,'HR',7,4);
insert into manager values(1114,'SHR',3,5);

select*from manager;


select * from emplo where yr_join = '2014';
select p_name from project where duration>2;
select * from manager where team_size>5;
select c_name,domain from client where ori_country='India' and c_name like '___e%';
select count(*) from project where duration>2;
select * from emplo where yr_join=(select min(yr_join) from emplo);
select mid,count(em_man) from manager group by mid;
select max(duration) from project;
select avg(team_size) from manager;
select count(*) from client where ori_country='India';

