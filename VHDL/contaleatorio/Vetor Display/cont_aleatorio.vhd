library IEEE;
use ieee.std_logic_1164.all;
 
entity cont_aleatorio is
port (clock1, reset: in std_logic;
        HEX: out std_logic_vector (0 to 6));
end cont_aleatorio;
 
architecture arquitetura of cont_aleatorio is
 
    component displaycvector is
    port (bcd: in std_logic_vector (3 downto 0);
              HEX: out std_logic_vector (0 to 6));
    end component;
 
    component clock is
    port (clk_in: in std_logic;
              q: out std_logic);
    end component;
   
    component conta_decada is
    port (clk:in std_logic;
         reset: in std_logic;
         q: out std_logic_vector(3 downto 0));
    end component;
   
    signal chupitilha: std_logic;
    signal querrenca: std_logic_vector (3 downto 0);
   
begin
talita: clock port map (clock1, chupitilha);
feliperenato: conta_decada port map (chupitilha, reset, querrenca);
caleb: displaycvector port map (querrenca, HEX);
 
end arquitetura;