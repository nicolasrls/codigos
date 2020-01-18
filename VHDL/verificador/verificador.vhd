library ieee;
use ieee.std_logic_1164.all;


entity verificador is
port(ch1,ch2,ch3,ch4: in std_logic;
			s1,s2,s3,s4: out std_logic );
end verificador;

architecture dataflow of verificador is
begin
	s1 <= ch1;
	s2 <= ch2;
	s3 <= ch3;
	s4 <= ch4;
end dataflow;