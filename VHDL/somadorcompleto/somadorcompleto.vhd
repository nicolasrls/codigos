-- Projeto dia 25/11/2019 Dupla: Nícolas Ribeiro e Leandro Alencar
-- Projeto: Somador completo.

entity somadorcompleto is
	port (a,b,cin:in bit;
					s, cout : out bit);
end somadorcompleto;

--------------------------------------
architecture dataflow of somadorcompleto is
begin 

	
	s <= cin xor (a xor b) ;
   cout <= ((a and b) or (cin and (a xor b)));
	
	
end dataflow;