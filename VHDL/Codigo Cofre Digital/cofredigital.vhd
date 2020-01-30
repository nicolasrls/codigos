-- Projeto com FPGA  - Cofre com combinação e 3 tentativas.
-- Autores : Nícolas Ribeiro, Leandro Alencar e Danúbio Filho.
-- Data: 14/01/2020
-- Entradas: Clock, Reset e 4 Chaves
-- Saídas: 3 Displays de 7 segmentos e um buzzer.
-- Descrição do projeto: Nosso projeto se baseia na ideia de desenvolver um cofre digital usando uma DE2 e FPGA, cofre 
-- esse que o usuário terá direito a uma senha de 4 dígitos e 3 tentativas de acerto.
-- Caso exceda, o cofre ficará bloqueado por 10 segundos até que possa surgir mais 3 novas chances.

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity cofredigital is
port (ch: in std_logic_vector(3 downto 0);
		enter: in std_logic;
		clk_50M,rst: in std_logic;	
		HEX0,HEX1,HEX2: out std_logic_vector(0 to 6);
		buz: out std_logic;
		pwm_pin: out std_logic);
end cofredigital;

architecture arquiteturacofre of cofredigital is

component clock 
port (clk_in: in std_logic;
      q: out std_logic);
end component;
  
component displaycvector
port(bcd: in std_logic_vector (3 downto 0);
     HEX: out std_logic_vector (0 to 6));
end component;

component conta_decada
port(clk:in std_logic;
    reset: in std_logic;
    q: out std_logic_vector(3 downto 0);
	 blok : out std_logic);       
end component;

component contador 
port(clk:in std_logic;
    reset: in std_logic;
     carry_out: out std_logic;
    q: out std_logic_vector(3 downto 0));
end component;

component PWM
 port ( CLK   :in  std_logic; -- clock 50Mhz
		ENABLE  : in  std_logic; -- Liga/desliga sinal PWM
		DUTY    :in  std_logic_vector (9 downto 0); 
		PWM_OUT :out std_logic); 
end component;

signal clk_1Hz: std_logic;
signal bcd0,bcd1: std_logic_vector(3 downto 0);
signal selecao_s: std_logic_vector(9 downto 0);
signal co: std_logic;
signal blok_s : std_logic;
signal blok_ok : std_logic;
constant password : std_logic_vector(3 downto 0):="0101";

begin 
	divisor: clock port map (clk_50M, clk_1Hz);			
	conta3: contador port map(enter,(blok_s or blok_ok),co, bcd1);
	contadec: conta_decada port map(clk_1Hz, co, bcd0, blok_s);
	decod0: displaycvector port map(bcd0, HEX2);
	decod1: displaycvector port map(bcd1, HEX1);
   decodchave: displaycvector port map(ch, HEX0);
	pwm0: PWM port map(clk_50M, '1', selecao_s, pwm_pin);

	process(enter, clk_50M)
	variable buz_v : std_logic:='0';
	variable blok_ok_v : std_logic:='0';
	variable selecao_v: std_logic_vector(9 downto 0);
	begin
	if ((password = ch) and enter = '0') then 			
			buz_v := '1';
			blok_ok_v := '1';
			selecao_v := "1111000000"; -- posicaoo servo open
else
			buz_v := '0';
			blok_ok_v := '0';
			selecao_v := "1110000000"; -- posicaoo servo open
end if;							
			buz <= buz_v;			
			blok_ok <= blok_ok_v;
			selecao_s <= selecao_v;	
end process;
end arquiteturacofre;