-- Divisor de Clock - Aula de FPGA c/ MM, Sallatiel e Daniel.
-- 50MHz -> 1Hz
 
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_unsigned.all;
------------------------------------------------------
entity clock_pwm is
port (clk_in: in std_logic;
           q: out std_logic);
end clock_pwm;
------------------------------------------------------
architecture behavioral of clock_pwm is
signal clk_div: std_logic;
begin
process(clk_in) -- Modelagem Comportamental
    variable count: integer:= 1;                                              
begin                                                      
    if(clk_in'event and clk_in='1') then
        count:= count+1;
        if(count = 499) then
            clk_div <= not clk_div;
            count:= 1;
        end if;
    end if;
end process;
 
q <= clk_div;

 
end behavioral;