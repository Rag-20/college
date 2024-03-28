create or replace function addf(int,int) returns void as'
declare
c int;

begin
	c=$1+$2;
	raise notice ''addition is %'',c;
end;'
language 'plpgsql';
