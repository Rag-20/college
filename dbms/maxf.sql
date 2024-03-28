
create or replace function maxf(int,int,int) returns void as'
declare
a int:=$1;
b int:=$2;
c int:=$3;

begin
	if ((a>b)and(a>c)) then
		raise notice ''% is maximum'',a;
	else 
		if ((b>a)and(b>c)) then
			raise notice ''% is maximum'',b;
	else
		raise notice''% is maximum'',c;
	end if;
	end if;
end;'
language 'plpgsql';

