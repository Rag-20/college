
create or replace function gs() returns void as'

declare
b student%rowtype;
girls cursor for select* from student where gender like ''F'';
c int;
begin
	open girls;
	loop
		fetch girls into b;

		exit when not found;

		raise notice ''%'',b;
	end loop;
	
	select count(*) from student into c where gender like ''F'';
	raise notice ''number of girls :- %'',c;
	close girls;
end;'

language 'plpgsql';

select gs();


create or replace function asp() returns void as'
declare
	a int;

begin
	select count(*) from professor into a where qualification=''Associate Professor'';
	raise notice ''number of professor:-%'',a;
end;'
language 'plpgsql';
select asp();




create or replace function ses() returns void as'
declare
	a professor.P_name%type;
        b student.dob%type;
begin
	select P_name from professor into a where yr_join=(select min(yr_join) from professor);
	raise notice ''%'',a;

	update student set dob=''1995-02-02'' where  roll_no=2058;
	
	select dob from student into b where roll_no=2058;
	if(b=''1995-02-02'') then
		raise notice ''update sucessful'';
	end if;

end;'
language 'plpgsql';
select ses();
