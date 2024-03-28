

create or replace function isf() returns void as'
declare
	a int;
	b int;

begin
	select count(*) from ships into a where source=''Andaman'';
	raise notice''ships from Andaman (before):-%'',a;

	if (a<5) then
		insert into ships values(15,''ins z'',''Andaman'',''Pune'');
		insert into ships values(16,''ins w'',''Andaman'',''Goa'');
	end if;

	select count(*) from ships into a where source=''Andaman'';
        raise notice''ships from Andaman (after):-%'',a;

	select count(*) from ships into b where destn=''Alibaug'';
	raise notice''ships to Alibaug :-%'',b;
	

end;'
language 'plpgsql';
select isf();


create or replace function ci() returns void as'
declare
	cust cursor for select * from customer2 where cid=''C101'';
	b customer2%rowtype;

begin
	open cust;
	loop
		fetch cust into b;
		exit when not found;
		raise notice''%'',b;
	end loop;
	close cust;
end;'
language 'plpgsql';
select ci();



