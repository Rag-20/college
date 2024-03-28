create or replace function powf(int,int) returns void as'
declare 
c int:=$1;
a int:=1;
begin
	while (a<$2) loop
		c=c*$1;
		a=a+1;
		end loop;
		raise notice''power is %'',c;
	end;'
	language 'plpgsql';
