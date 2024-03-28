create or replace function votef(int) returns void as'
declare
--a int:=$1;

begin
	if(18<$1) then
		raise notice''eligible to vote'';
	else
		raise notice''not eligible'';
	end if;
end;'
language 'plpgsql';

