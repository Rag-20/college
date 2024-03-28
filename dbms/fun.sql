

create or replace function a(int,int) returns void as'
declare
c int;

begin
c:=$1;
loop
	if c%2=0 then
		raise notice''% is even'',c;

	end if;
	c:=c+1;

	exit when c>$2;

end loop;
end;'
language 'plpgsql';
select a(15,22);
