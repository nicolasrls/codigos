-- Projeto Realizado por: Nicolas Ribeiro e Leandro Alencar. Data:26/11/19

library IEEE;
use ieee.std_logic_1164.all;

entity displaycvector is
	port (bcd :in std_logic_vector (0 to 3);
				 HEX0: out std_logic_vector(0 to 6));
end displaycvector;

--------------------------------------
architecture dataflow of displaycvector is
alias A: std_logic is bcd(0);
alias B: std_logic is bcd(1);
alias C: std_logic is bcd(2);
alias D: std_logic is bcd(3);
begin 
	HEX0(0)<= not(A or C or (B xnor D));
	HEX0(1)<= not((not B) or (C xnor D));
	HEX0(2)<= not(B or(not C) or D);
	HEX0(3)<= not(A or((not B) and (not D))or((not B) and C) or (C and (not D)) or (B and (not C) and D));
	HEX0(4)<= not(((not B) and (not D)) or (C and (not D)));
	HEX0(5)<= not(A or ((not C) and (not D)) or (B and (not C)) or (B and (not D)));
	HEX0(6)<= not(A or (B xor C) or (C and (not D)));
	
	end dataflow;