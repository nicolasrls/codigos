-- Contador de década sobe e desce
-- Entradas: clk (clock), reset;
-- Saída: q (Vetor 4 posições tipo BCD)
-- Autores: João Vitor e Marcos Meira
-- 02/08/2017
 
library IEEE;                                                        
use IEEE.std_logic_1164.all;
use IEEE.std_logic_unsigned.all;
 
entity contador is
port(
    clk:in std_logic;
    reset: in std_logic;
    carry_out: out std_logic;
    q: out std_logic_vector(3 downto 0));
end contador;
 
architecture arquitetura of contador is
begin
    process(clk,reset)                                  
    variable qtemp: std_logic_vector(3 downto 0);  
    begin
        if reset='1' then
        qtemp:="0000";		  
        else		
            if clk'event and clk='1' then
                    if qtemp<3 then     ---
                    qtemp:=qtemp+1;      ---                              
                    carry_out <= '0';       ---
                    else                        ---     CONTADOR CRESCENTE
                    qtemp:="0000";       ---                                  
                    carry_out <= '1';       ---
                    end if;                 --- 
						  
            end if;		
        q<=qtemp;                                                
        end if;
    end process;                                                      
end arquitetura;