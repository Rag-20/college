drop table ships cascade;
drop table customer2;
drop table ports;

create table ships(s_no int primary key,s_name varchar(20),source varchar(20), destn varchar(20));

insert into ships values(10,'ins v','Mumbai','Goa');
insert into ships values(11,'ins c','Mumbai','Pune');
insert into ships values(12,'ins a','Kolakata','Dehradun');
insert into ships values(13,'ins s','Nagpur','Dehradun');
insert into ships values(14,'ins k','Kerala','Goa');

select* from ships;


create table customer2(cid varchar(10) primary key,c_name varchar(20),c_no bigint,em_id varchar(30), sh_cu int references ships(s_no));

insert into customer2 values('C100','Anu',12327625425,'dajkdbhaca@gmail.org',10);
insert into customer2 values('C101','Vir',2327765325,'dvsbkdbhaca@gmail.edu',12);
insert into customer2 values('C102','Anuraag',1827245225,'dajkdadasaca@gmail.com',10);
insert into customer2 values('C103','Aniketh',5347625425,'afdcjkdbhaca@gmail.org',11);
insert into customer2 values('C104','Durga',1343725425,'bdgkdbhaca@gmail.com',13);
select*from customer2;


create table ports(p_no int primary key,p_name varchar(20),sh_p int references ships(s_no));

insert into ports values(1,'Dadar',10);
insert into ports values(2,'Mumbai',10);
insert into ports values(3,'Kochi',14);
insert into ports values(4,'Pune',11);
insert into ports values(5,'Nagar',13);

select* from ports;


select* from ships where source='Mumbai' and destn='Goa';
select c_name,c_no from customer2 where c_name like '%r' and em_id like '%edu';
select p_no from ports where p_name='Dadar';
select c_name from customer2 order by c_name;
select source,count(*) from ships group by source;
select count(*) from customer2 where em_id like '%org';

