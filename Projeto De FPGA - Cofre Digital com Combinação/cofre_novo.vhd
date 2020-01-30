library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity cofre_novo is
port (ch: in std_logic_vector(3 downto 0);
		enter: in std_logic;
		clk_50M,rst: in std_logic;	
		HEX0,HEX1,HEX2: out std_logic_vector(0 to 6);
		buz: out std_logic_vector(0 to 17);
		buz_verde: out std_logic_vector(0 to 7);
		pwm_pin: out std_logic);
end cofre_novo;

architecture arquiteturacofre of cofre_novo is

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
signal block_3: std_logic;
signal block_dec: std_logic;
signal block_ok: std_logic;
constant password : std_logic_vector(3 downto 0):="0101";

begin 
	divisor: clock port map (clk_50M, clk_1Hz);			
	conta3: contador port map(enter, (block_3 or block_ok), block_dec, bcd1);
	contadec: conta_decada port map(clk_1Hz, block_dec, bcd0, block_3);
	decod0: displaycvector port map(bcd0, HEX2);
	decod1: displaycvector port map(bcd1, HEX1);
   decodchave: displaycvector port map(ch, HEX0);
	pwm0: PWM port map(clk_50M, '1', selecao_s, pwm_pin);

	process(enter, clk_50M)
	variable buz_v : std_logic_vector(0 to 17):="000000000000000000";
	variable buz_g : std_logic_vector (0 to 7) := "00000000";
	variable blok_ok_v : std_logic:='0';
	variable selecao_v: std_logic_vector(9 downto 0);
	begin
	if ((password = ch) and enter = '0') then 						
			buz_v := "000000000000000000";
			buz_g := "11111111";
			blok_ok_v := '1';
			selecao_v := "1111000000"; -- posicaoo servo open
else
			buz_v := "111111111111111111";			
			buz_g := "00000000";
			blok_ok_v := '0';
			selecao_v := "1110000000"; -- posicaoo servo close
end if;							
			buz <= buz_v;			
			buz_verde <= buz_g;
			block_ok <= blok_ok_v;
			selecao_s <= selecao_v;	
end process;
end arquiteturacofre;