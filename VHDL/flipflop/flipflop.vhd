library IEEE;
use ieee.std_logic_1164.all;

entity flipflop is
port (d, clk: in STD_logic;
		q : out std_logic);
end flipflop;

architecture behavioral of flipflop is
begin 
	process (clk)
	begin
		if clk'event and clk = '1' then
		q <= d;
		end if;
		end process;
end behavioral;