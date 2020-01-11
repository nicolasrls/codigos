-- Projeto com FPGA  - Cofre com combinação e 3 tentativas.
-- Autores : Nícolas Ribeiro, Leandro Alencar e Danúbio Filho.
-- Data: 21/01/2020
-- Entradas: Clock, Reset e 4 Chaves
-- Saídas: 3 Displays de 7 segmentos e um buzzer.
-- Descrição do projeto: Nosso projeto se baseia na ideia de desenvolver um cofre digital usando uma DE2 e FPGA, cofre esse que o usuário terá direito a uma senha de 4 dígitos e 3 tentativas de acerto. Caso exceda, o cofre ficará bloqueado por 20 segundos até que possa surgir mais 3 novas chances.

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity cofredigital is
port (ch1,ch2,ch3,ch4: in std_logic;		
		clk,rst: in std_logic;		
		HEX0,HEX1,HEX2: out std_logic_vector(0 to 6);
		buzzer: out std_logic);
end cofredigital;

architecture arquiteturacofre of cofredigital is

component clock 
port (clk_in: in std_logic;
        q: out std_logic);
end component;
  
component displaycvector
port(bcd: in std_logic_vector (3 downto 0);
      HEX0: out std_logic_vector (0 to 6));
end component;           

begin 

buzzer <= ch1;
end arquiteturacofre;