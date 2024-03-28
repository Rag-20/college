drop table books cascade;
drop table customer cascade;
drop table author;
drop table cus_books;


create table books(isbn_no integer primary key, b_name varchar(20),pub_name varchar(20),ed_no integer);

insert into books values(1110,'Electronics','McGraw Hill',4);
insert into books values(1111,'Physics','McGraw Hill',2);
insert into books values(1112,'Maths','Andrew Ga',7);
insert into books values(1113,'Statistics','Wiley',6);
insert into books values(1114,'Electrical','Nirali',5);

select*from books;


create table customer(cid integer primary key,c_name varchar(20),c_no bigint,e_mail varchar(30));

insert into customer values(10,'Candece',9373503782,'ajgfgvb@gmail.com');
insert into customer values(11,'Carthy',9312343782,'ajgfgvb@gmail.com');
insert into customer values(12,'Anu',9373502222,'ajgdscdsb@gmail.com');
insert into customer values(13,'lay',9333503782,'ajgfgedddda@gmail.org');
insert into customer values(14,'hailey',9373534382,'asfgfgvb@gmail.org');

select*from customer;



create table author(aid integer primary key,a_name varchar(20),c_no bigint,e_mail varchar(30),book_au integer references books(isbn_no)on delete cascade on update cascade);

insert into author values(110,'K.Kelvin',1298734567,'dfgwvdj@gmail.com',1110);
insert into author values(111,'Adirn',1298723237,'addfdj@gmail.com',1111);
insert into author values(112,'Avanti',1298321567,'dfrfcdvdj@gmail.org',1110);
insert into author values(113,'kenn',1298111567,'dfcfj@gmail.org',1112);
insert into author values(114,'Mr. Prakash Shastri',1293322567,'dfgwvdj@gmail.com',1113);

select*from author;


create table cus_books(cid integer references customer(cid) on delete cascade on update cascade,isbn integer references books(isbn_no)on delete cascade on update cascade);
insert into cus_books values(10,1110);
insert into cus_books values(11,1110);
insert into cus_books values(14,1111);
insert into cus_books values(12,1112);
insert into cus_books values(11,1113);
insert into cus_books values(13,1114);
insert into cus_books values(12,1111);
insert into cus_books values(11,1112);
select*from cus_books;


select isbn_no,b_name from books where pub_name like 'A%' and ed_no>3;
select cid,c_name from customer where c_no IS NOT NULL;
select* from author where a_name like '%i%';
select a_name from author where e_mail like '%org';
select b_name from books,author where author.book_au=books.isbn_no and a_name like 'K.Kelvin';
select b_name from books,customer,cus_books where customer.c_name like 'C%' and customer.cid=cus_books.cid and cus_books.isbn=books.isbn_no group by b_name;
select b_name from books,customer,cus_books where pub_name ='McGraw Hill' and customer.e_mail like '%org' and customer.cid=cus_books.cid and cus_books.isbn=books.isbn_no;
select pub_name,a_name from books,author where books.isbn_no=author.book_au;
