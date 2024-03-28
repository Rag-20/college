
drop function bc();
create or replace function bc() returns refcursor as'
declare
	a books%rowtype;b int;
	book refcursor;-- for select * from books where ed_no=(select max(ed_no) from books);
begin
	open book for select * from books where ed_no=(select max(ed_no) from books);
/*	loop
		fetch book into a;
		exit when not found;
		b=b+1;
		raise notice ''%'',a;
		
	end loop;*/
select count(*) from books into b where ed_no=(select max(ed_no) from books);
	return b;
return book;

end;'
language 'plpgsql';

begin;
	select bc();
	fetch all in "<unnamed portal 1>";
	commit;


drop function ps();
create or replace function ps() returns refcursor as'
declare
	nam refcursor;-- for select * from author where a_name like ''A%'';
	a author%rowtype;
	b author.c_no%type;
	c int;
begin
	open nam for select * from author where a_name like ''A%'';
	/*loop
		fetch nam into a;
	        exit when not found;
		raise notice''%'',a;
	end loop;
	close nam;*/

	update author set c_no=9822307346 where a_name=''Mr. Prakash Shastri'';
	select c_no from author into b where a_name=''Mr. Prakash Shastri'';
	
	if (b=9822307346) then
		raise notice''update sucessful'';
	end if;
	select count(*) from author into c where a_name like ''A%'';
	return c;
	return nam;
end;'
language 'plpgsql';

begin;
        select ps();
        fetch all in "<unnamed portal 2>";
        commit;

create or replace function cd() returns void as'
declare
	a customer.e_mail%type;
	b int;

begin
	delete from customer where e_mail like ''%org'';
	select e_mail from customer into a where e_mail like ''%org'';

	if (a is null) then
		raise notice '' delete sucessfull'';
	end if;

	select count(*) from customer into b;
	raise notice ''number of entries:-%'',b;
end;'
language 'plpgsql';
select cd();


